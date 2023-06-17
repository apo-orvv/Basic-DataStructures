#include <stdio.h>
#include <limits.h>
#define Vx 7
int minDist(int dist[], int sptSet[]) {
    int min_idx, min = INT_MAX;
    for (int v=0; v<Vx; v++)
        if (sptSet[v]==0 && dist[v]<=min) min=dist[v], min_idx=v;
    return min_idx;
}
void op(int dist[]) {
    printf("Vertex   Distance from Source A\n");
    char nodes[Vx]={'A','B','C','D','E','F','G'};
    for (int i=0; i<Vx; i++)
        printf("  %c \t\t   %d\n", nodes[i], dist[i]);
}
void dijkstra(int graph[Vx][Vx], int src) {
    int count, dist[Vx], sptSet[Vx];
    for (int i=0; i<Vx; i++) dist[i]=INT_MAX, sptSet[i]=0;
    dist[src]=0;
    for (count=0; count<Vx-1; count++) {
        int u = minDist(dist, sptSet); sptSet[u] = 1;
        for (int v=0; v<Vx; v++)
            if (!sptSet[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
    op(dist);
}
void main() {
    int graph[Vx][Vx] = {{0, 5, 3, 0, 0, 0, 0},
                         {0, 0, 2, 0, 0, 3, 1},
                         {0, 0, 0, 7, 0, 7, 0},
                         {2, 0, 0, 0, 7, 0, 0},
                         {0, 0, 0, 0, 0, 0, 0},
                         {0, 0, 0, 2, 1, 0, 0},
                         {0, 0, 0, 0, 0, 1, 0}
                        };
    dijkstra(graph, 0);
}