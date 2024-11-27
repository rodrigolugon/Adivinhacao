#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // fun�ao abs converte negativo para positivo

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

        double pontosperdidos = (abs)(chute - numerosecreto) / (double)2;

        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo\n");
    printf("Voc� acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos);

    return 0;

}
/*
O que acontece com o abs?
Com o uso de abs, a diferen�a chute - numerosecreto ser� convertida para um valor positivo antes de ser utilizada no c�lculo dos pontos perdidos.
Isso evita que a pontua��o seja alterada de forma errada caso o resultado dessa diferen�a seja negativo.

Por exemplo:

Se chute for 50 e o numerosecreto for 42, ent�o chute - numerosecreto = 8. O valor absoluto de 8 � 8.
Se chute for 30 e o numerosecreto for 42, ent�o chute - numerosecreto = -12. O valor absoluto de -12 � 12.
Isso garante que os pontos perdidos sempre aumentem conforme a diferen�a aumenta, independentemente da ordem dos n�meros.
*/
