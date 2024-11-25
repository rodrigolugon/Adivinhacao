#define NUMERO_DE_TENTATIVAS 3
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {

        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf_s("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

        if (acertou) {

            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break; //freia o for, o computador nao vai nem pensar
        }

        else if (maior) {
            printf("Seu chute é maior que o número secreto\n");
        }

        else {
            printf("Seu chute é menor que o número secreto\n");
        }
    }

    printf("Fim de jogo");

    return 0;

}

