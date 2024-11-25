// Mostre em qual tentativa o usuario acertou. while (1)
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

    while (1) { //condicao verdadeira, loop infinito ate eu quebrar ele com break


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
    }

    printf("Fim de jogo\n");
    printf("Voc� acertou em %d tentativas!\n", tentativas);

    return 0;

}

