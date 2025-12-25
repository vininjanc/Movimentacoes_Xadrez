// Pseudocódigo

/*

1. Entrada
    Definir Variáveis: Torre, Bispo e Rainha
        direita, esquerda, cima, baixo --- também variáveis?
            Torre: Move 5 casas para direita
            Bispo: Move 5 casas para a diagonal superior direita (cima direita x 5)
            Rainha: Move 8 casas para a esquerda


2. Processamento
    Qual estrutura usar? While, Do-While e For
    While: Torre
    Do-While: Bispo
    For: Rainha
    Sempre que eu executar a variável inteira correspondente ao movimento na função proposta, estarei imprimindo a direção dela.


3. Saída
    As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");
        Vou separar cada peça em um bloco para enfatizar qual foi o movimento de cada uma


*/


#include <stdio.h>

int main(){

    int t = 1, b = 1, r = 1; //Coloquei a letra inicial de cada peça como variável

    printf("Seja bem-vindo!\n");
    printf("\nVamos ver os movimentos das peças de xadrez:\n");
    printf("\n> Torre: Move-se em linha reta horizontalmente ou verticalmente.\n");
    printf("> Bispo: Move-se na diagonal.\n");
    printf("> Rainha: Move-se em todas as direções.\n");

    //Mover a torre 5 casas para a direita
    printf("\n>>> TORRE <<<\n"); // Coloco fora da estrutura para garantir um título e evitar repetição junto a cada movimento para direita
    while (t <= 5) {
        printf("Direita.\n");
        t++;
    }

    //Mover o bispo 5 casas para a diagonal
    printf("\n>>> BISPO <<<\n");
    do{
        printf("Cima, Direita\n");
        b++;
    } while(b <= 5);

    //Mover a rainha 8 casas para a esquerda
    printf("\n>>> RAINHA <<<\n");
    for(r; r <= 8; r++){
        printf("Esquerda\n");
    }

    printf("\nEsses foram os movimentos das peças, até aqui...\n");

    return 0;
}