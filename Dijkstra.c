#ifndef DIJKSTRA_H
#include "Dijkstra.h"
#include <limits.h>
#include <stdlib.h>
#define DIJKSTRA_H
#endif 


#define INF INT_MAX

// ===== DIJKSTRA =====
// Calcula menores caminhos usando lista de adjacência
Resultado dijkstra(Lista* grafo, int origem, int ordem) {
    int* dist = malloc(sizeof(int) * ordem);
    int* visitado = malloc(sizeof(int) * ordem);
    int* anterior = malloc(sizeof(int) * ordem);

    for (int i = 0; i < ordem; i++) {
        dist[i] = INF;
        visitado[i] = 0;
        anterior[i] = -1;
    }

    dist[origem] = 0;

    for (int i = 0; i < ordem - 1; i++) {
        int u = menorDistancia(dist, visitado, ordem);
        if (u == -1) break;
        visitado[u] = 1;

        // percorre lista de adjacência do vértice u
        No* atual = grafo[u].cabeca;
        while (atual != NULL) {
            int v = atual->vertice;
            int peso = atual->peso;
            if (!visitado[v] && dist[u] != INF && dist[u] + peso < dist[v]) {
                dist[v] = dist[u] + peso;
                anterior[v] = u;
            }
            atual = atual->prox;
        }
    }

    // libera apenas auxiliares
    free(dist);
    free(visitado);

    // retorna struct com dados
    Resultado resultado;
    resultado.anterior = anterior;
    resultado.ordem = ordem;
    resultado.origem = origem;
    return resultado;
}

// ===== MENOR DISTÂNCIA =====
// Escolhe o vértice não visitado com menor distância atual
int menorDistancia(int dist[], int visitado[], int ordem) {
    int menor = INF, indice = -1;
    for (int i = 0; i < ordem; i++) {
        if (!visitado[i] && dist[i] < menor) {
            menor = dist[i];
            indice = i;
        }
    }
    return indice;
}