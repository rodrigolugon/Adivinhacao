//Pode ter if sem else

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

    if (chute == numerosecreto) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    }
    else {
        if (chute > numerosecreto) {
            printf("Seu chute é maior que o número secreto\n");
        }

        if (chute < numerosecreto) {
            printf("Seu chute é menor que o número secreto\n");
        }

    }

    return 0;

}