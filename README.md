# Algoritmo de Dijkstra

Projeto desenvolvido para implementar e demonstrar o funcionamento do Algoritmo de Dijkstra, utilizado para encontrar o menor caminho entre vértices em um grafo ponderado.

## Sobre o projeto

Este projeto foi desenvolvido em grupo com o objetivo de estudar, implementar e apresentar o funcionamento do Algoritmo de Dijkstra. O algoritmo é bastante utilizado em problemas de otimização de caminhos, como rotas em mapas, redes de computadores, sistemas de navegação e análise de grafos.

A aplicação permite calcular o menor caminho a partir de um vértice inicial até os demais vértices de um grafo, considerando os pesos das arestas.

## Como funciona

O Algoritmo de Dijkstra trabalha escolhendo sempre o vértice com menor distância conhecida a partir do ponto inicial. A cada etapa, ele atualiza as distâncias dos vértices vizinhos até encontrar os menores caminhos possíveis.

Resumo do processo:

1. Define-se um vértice inicial.
2. A distância do vértice inicial é marcada como zero.
3. As demais distâncias começam como infinito.
4. O algoritmo visita o vértice com menor distância atual.
5. As distâncias dos vizinhos são atualizadas.
6. O processo continua até todos os vértices serem analisados.

## Funcionalidades

- Representação de grafos ponderados
- Definição de vértice inicial
- Cálculo do menor caminho
- Exibição das menores distâncias
- Demonstração prática do funcionamento do algoritmo

## Exemplo de aplicação

Um grafo pode representar cidades e estradas, onde:

- Os vértices representam as cidades
- As arestas representam as estradas
- Os pesos representam as distâncias entre as cidades

Com isso, o algoritmo consegue indicar qual é o menor caminho entre uma cidade de origem e as demais cidades do grafo.

## Tecnologias utilizadas

- Linguagem de programação: C
  
- Estrutura de dados: grafos
- Conceitos aplicados:
  - Algoritmos
  - Menor caminho
  - Grafos ponderados
  - Estruturas de repetição
  - Condicionais
  - Listas, matrizes ou dicionários

Integrantes
Ana Beatriz Costa
Bianca Milani 
Tiago Lucas

Objetivo acadêmico
Este projeto foi desenvolvido como atividade acadêmica para compreender melhor o funcionamento de algoritmos de caminhos mínimos em grafos, com foco no Algoritmo de Dijkstra.
Observação
O Algoritmo de Dijkstra funciona corretamente em grafos com pesos não negativos. Caso existam arestas com peso negativo, outros algoritmos, como Bellman-Ford, são mais adequados.
