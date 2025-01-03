#include <stdio.h>

int main() {
    float nilai;

    printf("\033[H\033[J");

    printf("Masukkan nilai anda = ");
    scanf("%f", &nilai);

    if (nilai >= 60) {
        printf("ANDA LULUS...^_^");
    } else {
        printf("ANDA TIDAK LULUS ...:(");
    }

    return 0;
}
