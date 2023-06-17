#include<stdio.h>
#define INFINITY 9999
#define MAX 10
 
void dijkstra(int G[MAX][MAX],int n,int startnode);
 
int main()
{
int i,j,n,u;
printf("Enter no. of vertices:");
scanf("%d",&n);
int G[MAX][MAX] =       {{0, 5, 3, 0, 0, 0, 0},
                         {0, 0, 2, 0, 0, 3, 1},
                         {0, 0, 0, 7, 0, 7, 0},
                         {2, 0, 0, 0, 7, 0, 0},
                         {0, 0, 0, 0, 0, 0, 0},
                         {0, 0, 0, 2, 1, 0, 0},
                         {0, 0, 0, 0, 0, 1, 0}
                        };
printf("\nEnter the starting node:");
scanf("%d",&u);
dijkstra(G,n,u);
return 0;
}
 
void dijkstra(int G[MAX][MAX],int n,int startnode)
{
 
int cost[MAX][MAX],distance[MAX],pred[MAX];
int visited[MAX],count,mindistance,nextnode,i,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(G[i][j]==0)
cost[i][j]=INFINITY;
else
cost[i][j]=G[i][j];
for(i=0;i<n;i++)
{
distance[i]=cost[startnode][i];
pred[i]=startnode;
visited[i]=0;
}
distance[startnode]=0;
visited[startnode]=1;
count=1;
while(count<n-1)
{
mindistance=INFINITY;
for(i=0;i<n;i++)
if(distance[i]<mindistance&&!visited[i])
{
mindistance=distance[i];
nextnode=i;
}
visited[nextnode]=1;
for(i=0;i<n;i++)
if(!visited[i])
if(mindistance+cost[nextnode][i]<distance[i])
{
distance[i]=mindistance+cost[nextnode][i];
pred[i]=nextnode;
}
count++;
}
char al[]={'A','B','C','D','E','F','G','H'};
for(i=0;i<n;i++)
if(i!=startnode)
{
printf("\nDistance of node %c = %d",al[i],distance[i]);
printf("\nPath = %c",al[i]);
j=i;
do
{
j=pred[j];
printf("<-%c",al[j]);
}while(j!=startnode);
}
}