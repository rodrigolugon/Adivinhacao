//O usuario precisa ter 3 tentativas.
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;

    for (int i = 1; i <= 3; i++) {

        printf("Tentativa %d de 3\n", i);
        printf("Qual � o seu chute? ");
        scanf_s("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);
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
    }
    printf("Fim de jogo");

    return 0;


}