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

    int acertou = (chute == numerosecreto);
    // nao obrigatorio () aqui

    //printf("Acertou: %d\n", acertou);
    //acertou pode ser verdadeiro(1) ou falso(0)

    if (acertou) {
        printf("Parab�ns! Voc� acertou!\n");
        printf("Jogue de novo, voc� � um bom jogador!\n");
    }
    else {
        int maior = chute > numerosecreto;

        if (maior) {
            printf("Seu chute � maior que o n�mero secreto\n");
        }
        else {
            printf("Seu chute � menor que o n�mero secreto\n");
        }

    }

    return 0;

}