//casting eh a ideia de converter um tipo no outro, 
//basta dizer o tipo antes de usar a variavel/numeral
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    while (1) {


        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf_s("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        }

        else if (maior) {
            printf("Seu chute é maior que o número secreto\n");

        }
        else {
            printf("Seu chute é menor que o número secreto\n");
        }

        tentativas++;

        double pontosperdidos = (double)(chute - numerosecreto) / (double)2;
        if (pontosperdidos < 0) {
            pontosperdidos = pontosperdidos * -1;
        }//nesse if tratamos no caso do chute ser menor, e, dar valor superior a 1000
        pontos = pontos - pontosperdidos;
    }
    //(double)(chute - numerosecreto): Aqui, usamos casting para converter
    // o resultado da subtração (um int) para um número do tipo double (um número com casa decimal).
    // porque queremos dividir o resultado como número de ponto flutuante.

    printf("Fim de jogo\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);

    return 0;

}

