# Projeto Super Trunfo

Este projeto de Super Trunfo simula o jogo em três níveis de dificuldade usando a linguagem C, estruturas de repetição e funções recursivas.

---

# Nível Novato
O desafio inicial foca em estruturas de decisão `if` e `if-else`. O sistema permite o cadastro de duas cartas com suas propriedades e as compara com base em um atributo (população), determinando a vencedora.

# Nível Aventureiro
Este nível explora o uso da estrutura `switch` e de comparações aninhadas. Um menu interativo permite ao usuário escolher o atributo para a comparação entre as duas cartas. A lógica de decisão determina a carta vencedora.

# Nível Mestre
O desafio final eleva a complexidade. O sistema permite a comparação de dois atributos simultaneamente. A lógica de decisão utiliza operadores ternários e lógica aninhada para lidar com os múltiplos critérios e empates.

---

## Como Rodar o Projeto

1. No arquivo `main.c`, **descomente o bloco de código do Nível** que você deseja executar e certifique-se de que os outros níveis estão com `/*` e `*/`.
2. Abra o terminal na pasta do projeto no VS Code.
3. Use o comando `gcc` para compilar o código:
   ```bash
   gcc main.c -o supertrunfo
