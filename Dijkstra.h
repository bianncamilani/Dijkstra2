#ifndef GRAFO_H
#include "grafo.h"
#define GRAFO_H
#endif

// ===== STRUCT DE RESULTADO =====
typedef struct {
    int* anterior;   // vetor de predecessores
    int ordem;       // quantidade de vértices
    int origem;      // vértice de origem
} Resultado;

Resultado dijkstra(Lista* grafo, int origem, int ordem);

int menorDistancia(int dist[], int visitado[], int ordem);