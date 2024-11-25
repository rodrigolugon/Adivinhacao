// Mostre em qual tentativa o usuario acertou. while (1)
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

    while (1) { //condicao verdadeira, loop infinito ate eu quebrar ele com break


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
    }

    printf("Fim de jogo\n");
    printf("Você acertou em %d tentativas!\n", tentativas);

    return 0;

}

