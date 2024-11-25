#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    while (1) {


        printf("Tentativa %d\n", tentativas);
        printf("Qual � o seu chute? ");
        scanf_s("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

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

        tentativas++;

        double pontosperdidos = (chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo\n");
    printf("Voc� acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);

    return 0;

}

