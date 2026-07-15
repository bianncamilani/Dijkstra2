#ifndef GRAFO_H
#include "grafo.h"
#include <stdlib.h>
#define GRAFO_H
#endif

// ===== CRIA O GRAFO =====
// Aloca memória para o vetor de listas (um por vértice)
Lista* criarGrafo(int ordem) {
    Lista* grafo = malloc(sizeof(Lista) * ordem);
    for (int i = 0; i < ordem; i++)
        grafo[i].cabeca = NULL; // inicializa vazio
    return grafo;
}

// ===== ADICIONA ARESTA =====
// Insere uma aresta na lista de adjacência do vértice origem
void adicionarAresta(Lista* grafo, int origem, int destino, int peso) {
    No* novo = malloc(sizeof(No));
    novo->vertice = destino;
    novo->peso = peso;
    novo->prox = grafo[origem].cabeca;
    grafo[origem].cabeca = novo;
}