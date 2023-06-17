#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#define Vs 5
char nodes[Vs]={'B','D','E','F','G'};
int minKey(int key[], bool mstSet[]) {
	int minidx, min=INT_MAX;
	for (int i=0; i<Vs; i++) {
		if (key[i]<min && !mstSet[i]) { min=key[i], minidx=i; }
	}
	return minidx;
}
int display(int parent[], int graph[Vs][Vs]) {
	printf("Edge\tWeight\n");
	for (int c=1; c<Vs; c++) {
		printf("%c - %c     %d \n", nodes[parent[c]], nodes[c], graph[c][parent[c]]);
	}
}
void prim(int graph[Vs][Vs]) {
	int parent[Vs]; int key[Vs]; bool mstSet[Vs];
	for (int i=0; i<Vs; i++) { key[i]=INT_MAX, mstSet[i]=false; }
	key[0]=0; parent[0]=-1;
	for (int count=0; count<Vs-1; count++) {
		int u=minKey(key, mstSet); mstSet[u]=true;
		for (int v=0; v<Vs; v++) {
			if (graph[u][v] && !mstSet[v] && graph[u][v]<key[v])
				parent[v]=u, key[v]=graph[u][v];
		}
	}
	display(parent, graph);
}
void main() {
	int am[Vs][Vs] = {  {  0, 16, 3, 13,  6 },
						{ 16,  0, 9,  8,  9 },
						{  3,  9, 0,  7,  4 },
						{ 13,  8, 7,  0, 20 },
						{  6,  9, 4, 20,  0 }  };
	prim(am);
}