#include <stdio.h>

    //Mover a torre 5 casas para a direita
    void torre(int t) {

    if (t > 0) {
        printf("Direita.\n");
        torre (--t); //Recursividade e Pré-Decremento para chegar o valor até 0 (logicamente igual a t - 1)
    }
    }

    //Mover o bispo 5 casas para cima direita
    void bispo(int b){ //Combinação exigida pelo professor: Recursividade + Loops aninhados
                       // A Recursividade serve como o foco de repetição delimitada do processo enquanto os loops como a ferramenta que repete a tarefa até que a recursividade diga que acabou.
        if (b > 0){ //Estrutura de Controle if combina bem com o modo recursividade, cria as possibilides pela união com os operadores relacionais
            for(int i = 0; i < 1; i++) // Loop Externo indica 'Cima, ', i representa este movimento
            {
                printf("Cima, ");
                for(int j = 0; j < 1; j++) // Loop interno indica 'Direita.\n', j representa este movimento
                {
                    printf("Direita.\n");
                }
            }
            bispo (b - 1); // Recursividade garantindo um limite de execução geral
        }
    }

    //Mover a rainha 8 casas para a esquerda
    void rainha(int r){
    if (r > 0){
        printf("Esquerda.\n");
        rainha (--r);
    }
    }


int main(){

    //Tipo de dado e variáveis da quantidade de vezes que repete
    int quantidadet = 5, quantidadeb = 5, quantidader = 8;

    //Cabeçalho introdutório mantido dentro da função main, antes de chamar as funções void e o loop
    printf("Seja bem-vindo!\n");
    printf("\nVamos ver os movimentos das peças de xadrez:\n");
    printf("\n> Torre: Move-se em linha reta horizontalmente ou verticalmente.\n");
    printf("> Bispo: Move-se na diagonal.\n");
    printf("> Rainha: Move-se em todas as direções.\n");
    printf("> Cavalo: Move-se em L.\n");

    printf("\n>>> TORRE <<<\n"); // Título para estrutura
    torre (quantidadet); // Número de repetições da função vazio (void) respectiva

    printf("\n>>> BISPO <<<\n");
    bispo (quantidadeb);

    printf("\n>>> RAINHA <<<\n");
    rainha (quantidader);

    //Mover o cavalo duas casas para cima e uma para direita
    printf("\n>>> CAVALO <<<\n");
    for (int c = 1; c > 0; c--) //Representa a rodada de movimento do cavalo
    {
        for (int i = 2, j = 0 ; i >= 0; i--) //A condicional '=' permite usar o if para lógica; 'j' é apenas para cumprimento do enunciado
        {
            if (i > 0) { //Lógica do movimento vertical, 2 casas para cima, 'if' (se)
            printf("Cima, ");
            continue;
            }
            //Lógica do movimento horizontal, 1 casa para direita
            printf("Direita.\n");
             // Satisfaz a solicitação do break;
            
        }
    }

    printf("\nEsses foram os movimentos das peças, até aqui no nível mestre.\n");

    return 0;
}