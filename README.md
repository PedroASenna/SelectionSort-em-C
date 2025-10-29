# 🚀 Análise de Desempenho: Selection Sort em C

Um projeto acadêmico focado na implementação e análise de complexidade O(N²) do algoritmo Selection Sort, testando seus cenários de melhor, pior e caso médio.

## 📋 Sobre o Projeto

Este repositório contém uma implementação modular do algoritmo de ordenação **Selection Sort** (Ordenação por Seleção) na linguagem C. O objetivo principal não é apenas implementar o algoritmo, mas **analisar seu desempenho de tempo de execução** (Time Complexity) ao ser submetido a diferentes tipos de entrada de dados.

O código é estruturado de forma modular (separado em arquivos `.h` e `.c`), seguindo boas práticas de engenharia de software para **separação de responsabilidades** (SoC).

## 🧠 O Algoritmo: Selection Sort

O Selection Sort funciona dividindo o array em duas partes: uma sub-lista ordenada que cresce da esquerda para a direita, e uma sub-lista não ordenada.

### Em cada iteração, o algoritmo:

1. **Seleciona** o menor elemento da sub-lista não ordenada
2. **Troca** este elemento com o primeiro elemento da sub-lista não ordenada

### Análise de Complexidade

Uma característica chave do Selection Sort é que seu número de comparações é sempre o mesmo (O(N²)), independentemente da ordem inicial dos dados. No entanto, o número de trocas é baixo (O(N)), o que o torna útil em cenários onde o custo de escrita (troca) é muito alto.

| Cenário | Comparações | Trocas | Complexidade Total |
|---------|-------------|--------|--------------------|
| Melhor Caso (Ordenado) | O(N²) | O(N) | O(N²) |
| Caso Médio (Aleatório) | O(N²) | O(N) | O(N²) |
| Pior Caso (Reverso) | O(N²) | O(N) | O(N²) |

## 📁 Estrutura do Projeto

```
.
├── main.c
├── selection_sort.h
├── selection_sort.c
├── utils.h
├── utils.c
└── README.md
```

- **`main.c`**: Ponto de entrada. Responsável por orquestrar os testes, alocar memória (`malloc`) e medir o tempo de execução (`clock`)
- **`selection_sort.h`**: Arquivo de cabeçalho (interface) para o algoritmo de ordenação
- **`selection_sort.c`**: Implementação (lógica interna) do `selectionSort` e sua função auxiliar `swap`
- **`utils.h`**: Arquivo de cabeçalho (interface) para as funções utilitárias
- **`utils.c`**: Implementação das funções auxiliares, incluindo `printArray` e os geradores de dados para os cenários de teste
- **`README.md`**: Esta documentação

## ⚙️ Cenários de Teste Analisados

O `main.c` executa o algoritmo de ordenação em três cenários distintos para comparar o tempo de execução:

### 📈 Melhor Caso: `fillSorted()`
- **Entrada**: Um array já ordenado (ex: `[0, 1, 2, 3, 4]`)
- **Análise**: Testa o desempenho do algoritmo sob condições ideais

### 📉 Pior Caso: `fillReverse()`
- **Entrada**: Um array ordenado de forma reversa (ex: `[4, 3, 2, 1, 0]`)
- **Análise**: Testa o desempenho do algoritmo sob as piores condições possíveis

### 📊 Caso Médio: `fillUniqueRandom()`
- **Entrada**: Um array preenchido com números únicos, mas em ordem aleatória (ex: `[3, 1, 4, 0, 2]`)
- **Análise**: Simula o desempenho em um cenário de uso comum

## 🚀 Como Compilar e Executar

### Pré-requisitos
- Compilador C (ex: GCC)

### Passos

1. **Clone o repositório**
```bash
git clone https://github.com/PedroASenna/SelectionSort-em-C.git
cd SelectionSort-em-C
```

2. **Compile o projeto**

Como o projeto é modular, você deve compilar todos os arquivos-fonte (`.c`) juntos:

```bash
gcc main.c selection_sort.c utils.c -o selection_analise
```

3. **Execute a análise**

Isso irá rodar o programa, que executará os três cenários de teste e imprimirá o tempo de execução para cada um:

```bash
./selection_analise
```

### Exemplo de Saída

```
Executando Selection Sort com 50000 elementos em 3 cenários:

--- Cenário: Melhor Caso (Ordenado) ---
Tempo de execução para 50000 elementos: 0.8140 segundos.

--- Cenário: Pior Caso (Reverso) ---
Tempo de execução para 50000 elementos: 0.8250 segundos.

--- Cenário: Caso Médio (Aleatório Único) ---
Tempo de execução para 50000 elementos: 0.8210 segundos.
```

> **Nota**: Os tempos de execução são muito similares, confirmando a complexidade O(N²) em todos os casos, pois o número de comparações domina o tempo total.

## 👨‍💻 Autor

Feito com ❤️ por [PedroASenna](https://github.com/PedroASenna)

---

⭐ Se este projeto foi útil para você, considere dar uma estrela!
