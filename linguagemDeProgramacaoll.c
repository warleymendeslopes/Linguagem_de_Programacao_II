#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50];
    float pesos[5];
    float media = 0;
    int acimaMedia = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite o peso (em kg) da pessoa %d: ", i + 1);
        scanf("%f", &pesos[i]);

        media += pesos[i];
    }

    media /= 5;

    for (int i = 0; i < 5; i++) {
        if (pesos[i] > media) {
            acimaMedia++;
            printf("%s está acima da média.\n", nomes[i]);
        }
    }

    printf("Média dos pesos: %.2f kg\n", media);
    printf("Pessoas acima da média: %d\n", acimaMedia);

    return 0;
}
