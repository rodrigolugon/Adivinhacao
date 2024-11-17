#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;

    printf("Qual é o seu chute? ");
    scanf_s("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);
    // nao obrigatorio () aqui

    //printf("Acertou: %d\n", acertou);
    //acertou pode ser verdadeiro(1) ou falso(0)

    if (acertou) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    }
    else {
        int maior = chute > numerosecreto;

        if (maior) {
            printf("Seu chute é maior que o número secreto\n");
        }
        else {
            printf("Seu chute é menor que o número secreto\n");
        }

    }

    return 0;

}