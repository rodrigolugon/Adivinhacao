#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h> //pega todos os sec passados desde 1 jan 1970 ate agora

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    // me da um numero maluco, preciso dividir por 100 pq quero 1 ou 2 digitos;

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;


    int acertou = 0;

    int nivel;
    printf("Qual nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf_s("%d", &nivel);

    int numerotentativas;
    if (nivel == 1) {
        numerotentativas = 20;
    }
    else if (nivel == 2) {
        numerotentativas = 15;
    }
    else {
        numerotentativas = 6;
    } // quero definir o num de tentativas

    //printf("Numero secreto: %d ", numerosecreto); PARA TESTAR

    for (int i = 1; i <= numerotentativas; i++) {


        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf_s("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) {
            break;
        }

        else if (maior) {
            printf("Seu chute é maior que o número secreto\n\n");

        }
        else {
            printf("Seu chute é menor que o número secreto\n\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;

        pontos = pontos - pontosperdidos;
    }


    printf("Fim de jogo\n");
    if (acertou) {
        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);

    }
    else {
        printf("Você perdeu! Tente de novo!\n");
    }

    return 0;

}

