#include <stdio.h>
#include <ctype.h>

#ifndef GRAFO_H
#include "grafo.h"
#define GRAFO_H
#endif

#include "Dijkstra.h"


void imprimeArvoreRecursiva(int origem, int* anterior, int ordem, int nivel) {
    // indentação conforme nível
    for (int i = 0; i < nivel; i++) printf("   ");
    printf("%c\n", origem + 'A');

    // procura vértices que têm 'origem' como pai
    for (int i = 0; i < ordem; i++) {
        if (anterior[i] == origem) {
            imprimeArvoreRecursiva(i, anterior, ordem, nivel + 1);
        }
    }
}



// ===== MAIN =====
int main(int argc, char* argv[]) {
    FILE *GRAFO;
    if (argc > 1) {
        GRAFO = fopen(argv[1], "r");
    } else {
        GRAFO = stdin;
        printf("Digite a quantidade de vértices e arestas:\n");
    }

    int ordem, arestas;
    fscanf(GRAFO, "%d %d", &ordem, &arestas);

    // cria grafo como lista de adjacência
    Lista* grafo = criarGrafo(ordem);

    char i, j;
    int peso;
    for (int e = 0; e < arestas; e++) {
        if (argc > 1) {
            fscanf(GRAFO, " %c %c %d", &i, &j, &peso);
        } else {
            printf("Digite origem destino peso: ");
            scanf(" %c %c %d", &i, &j, &peso);
        }
        i = toupper(i);
        j = toupper(j);
        adicionarAresta(grafo, i - 'A', j - 'A', peso);
    }

    char letra;
    printf("\nDigite o ponto de origem (A-%c): ", 'A' + ordem - 1);
    scanf(" %c", &letra);
    letra = toupper(letra);

    if (letra < 'A' || letra >= 'A' + ordem) {
        printf("Entrada inválida!\n");
        return 1;
    }

    int origem = letra - 'A';

    Resultado res = dijkstra(grafo, origem, ordem);

    // imprime árvore recursiva corrigida
    imprimeArvoreRecursiva(res.origem, res.anterior, res.ordem, 0);
    
    return 0;
}