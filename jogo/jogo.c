//Pode ter if sem else

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;

    printf("Qual � o seu chute? ");
    scanf_s("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if (chute == numerosecreto) {
        printf("Parab�ns! Voc� acertou!\n");
        printf("Jogue de novo, voc� � um bom jogador!\n");
    }
    else {
        if (chute > numerosecreto) {
            printf("Seu chute � maior que o n�mero secreto\n");
        }

        if (chute < numerosecreto) {
            printf("Seu chute � menor que o n�mero secreto\n");
        }

    }

    return 0;

}