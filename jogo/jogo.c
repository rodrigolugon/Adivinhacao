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

    //SE O CHUTE FOR IGUAL AO NUMERO SECRETO 
    //if (chute == numerosecreto){..}
    //CASO CONTRARIO = else {..}

    if (chute == numerosecreto) {
        printf("Parab�ns! Voc� acertou!\n");
        printf("Jogue de novo, voc� � um bom jogador!\n");
    }
    else {
        printf("Voc� errou!\n");
        printf("Mas n�o desanime, tente de novo!\n");

    }

    return 0;

}