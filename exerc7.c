#include <stdio.h>
void frac(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}
int main() {
    float num, partfrac;
    int partint;

    printf("Digite um numero: ");
    scanf("%f", &num);

    frac(num, &partint, &partfrac);

    printf("Parte inteira: %d\n", partint);
    printf("Parte fracionaria: %.2f\n", partfrac);

    return 0;
}

