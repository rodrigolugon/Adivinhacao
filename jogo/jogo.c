#include <stdio.h>
#include <locale.h>
#define NUMERO_DE_TENTATIVAS 3

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {

        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual � o seu chute? ");
        scanf_s("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos!\n");
            i = i - 1; //i--
            continue; // continua o bloco sem matar o loop
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

        if (acertou) {

            printf("Parab�ns! Voc� acertou!\n");
            printf("Jogue de novo, voc� � um bom jogador!\n");
            break;
        }

        else if (maior) {
            printf("Seu chute � maior que o n�mero secreto\n");
        }

        else {
            printf("Seu chute � menor que o n�mero secreto\n");

        }

    }

    printf("Fim de jogo");

    return 0;

}

