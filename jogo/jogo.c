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

    //SE O CHUTE FOR IGUAL AO NUMERO SECRETO 
    //if (chute == numerosecreto){..}
    //CASO CONTRARIO = else {..}

    if (chute == numerosecreto) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    }
    else {
        printf("Você errou!\n");
        printf("Mas não desanime, tente de novo!\n");

    }

    return 0;

}