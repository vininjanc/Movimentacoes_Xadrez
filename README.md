# ♟️ Projeto MateCheck: Simulador de Xadrez em C

> **Disciplina:** Introdução à Programação (Ciências da Computação)
> **Desenvolvedor:** Vinícius Silva

Este repositório documenta a minha jornada de aprendizado em **Lógica de Programação e Estruturas de Repetição** utilizando a linguagem C. O projeto foi desenvolvido em três etapas evolutivas (Novato, Aventureiro e Mestre), simulando a movimentação de peças de xadrez para consolidar conceitos fundamentais e avançados.

---

## 📂 Estrutura do Projeto

O desenvolvimento foi dividido em três níveis de complexidade, cada um representado por um código-fonte específico:

| Arquivo | Nível | Foco de Aprendizado |
| :--- | :--- | :--- |
| `1_NN_Xadrez.c` | **Novato** | Estruturas básicas (`for`, `while`, `do-while`). |
| `2_NA_Xadrez.c` | **Aventureiro** | Loops Aninhados e Lógica de Movimento em "L". |
| `3_NM_Xadrez.c` | **Mestre** | Recursividade e Controle de Fluxo Complexo (`break`/`continue`). |

---

## 🚀 Evolução do Código

### 1️⃣ Nível Novato: A Fundação (`1_NN_Xadrez.c`)
Nesta primeira etapa, o objetivo foi entender como computadores repetem tarefas. Cada peça foi programada com uma estrutura diferente para fixação da sintaxe.

*   **Torre:** Movimento linear (Direita) utilizando `while`.
*   **Bispo:** Movimento diagonal (Cima, Direita) utilizando `do-while`.
*   **Rainha:** Movimento linear (Esquerda) utilizando `for`.
*   **Aprendizado:** Controle de variáveis contadoras e condições de parada simples.

### 2️⃣ Nível Aventureiro: O Desafio Lógico (`2_NA_Xadrez.c`)
Aqui, a complexidade aumentou com a introdução de **Loops Aninhados** (um loop dentro do outro) para simular movimentos não lineares.

*   **Foco Principal:** O **Cavalo**.
*   **Desafio:** Implementar o movimento em "L" (complexo).
*   **Solução:** Utilização de loops aninhados para coordenar movimentos verticais e horizontais em uma única execução lógica.
*   **Aprendizado:** Manipulação de múltiplas dimensões de movimento e lógica de passos combinados.

### 3️⃣ Nível Mestre: O Refinamento Técnico (`3_NM_Xadrez.c`)
A etapa final focou na otimização, elegância e uso de técnicas avançadas de Engenharia de Software. O código foi refatorado para substituir repetições mecânicas por **Funções Recursivas** e controles de fluxo precisos.

*   **Torre e Rainha:** Refatoradas para usar **Recursividade** (funções que chamam a si mesmas) em vez de loops simples.
*   **Bispo:** Implementação híbrida exigida no desafio: **Recursividade** para controlar a distância + **Loops Aninhados** para desenhar o passo diagonal.
*   **Cavalo:** Implementação de Loops Complexos com **Múltiplas Variáveis** (`for(i, j)`) e uso de `continue` e `break` para controle granular do fluxo.
*   **Aprendizado:** Gestão de pilha de memória (recursão), escopo de variáveis e *clean code*.

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem:** C (Padrão ANSI)
- **Compilador:** GCC
- **Conceitos:**
    - Estruturas de Repetição (`for`, `while`, `do-while`)
    - Condicional (`if`)
    - Recursividade
    - Manipulação de fluxo (`break`, `continue`)
    - Funções e Procedimentos (`void`)

---

## 💻 Como Compilar e Executar

Para testar a evolução do projeto, você pode compilar cada nível separadamente. Abra o terminal na pasta do projeto:

### Para o Nível Novato:
```bash
gcc 1_NN_Xadrez.c -o xadrez_novato
./xadrez_novato
```

### Para o Nível Aventureiro:
```bash
gcc 2_NA_Xadrez.c -o xadrez_aventureiro
./xadrez_aventureiro
```

### Para o Nível Mestre (Versão Final):
```bash
gcc 3_NM_Xadrez.c -o xadrez_mestre
./xadrez_mestre
```

*(Nota: No Windows, o executável terá a extensão `.exe`, ex: `xadrez_mestre.exe`)*

---

<div align="center">
  <h3>🏁 Xeque-Mate!</h3>
  <p>Desenvolvido por <strong>Vinícius Silva</strong>.</p>
  <p><em>"Tudo quanto fizerdes, fazei-o de todo o coração, como ao Senhor, e não aos homens." (Colossenses 3:23)</em></p>
</div>
```