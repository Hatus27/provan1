#include <stdio.h>
int main (){
    unsigned char x,x_max = 0,x_min = 255;
    unsigned int i,n;
    float x_linha;

    printf ("Digite o valor de n: ");
    scanf (" %d", &n);

    for (i = 1; i<=n; i++) {
        printf ("Digite o valor de x(0 a 255): \n");
        scanf ("%hhu", &x);
        if (x > x_max) x_max = x;
        if (x < x_min) x_min = x;
    }
    printf ("Digite o último valor de x:");
    scanf (" %hhu", &x);
    
    x_linha = (float)(x - x_min) / (x_max - x_min);
    printf ("o valor de x' = %f\n", x_linha);

    return 0;
}