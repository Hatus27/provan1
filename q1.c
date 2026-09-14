#include <stdio.h>
int main (){
    unsigned char r,g,b,m;
    unsigned char b0,b1,b2;

    printf ("Digite o valor de R: \n");
    scanf ("%hhu", &r);

    printf ("Digite o valor de G: \n");
    scanf (" %hhu", &g);

    
    printf ("Digite o valor de B: \n");
    scanf (" %hhu", &b);

    printf ("Digite o valor de M: \n");
    scanf (" %hhu", &m);

    b0 = (m>>2) & 1; //1010 0101
    b1 = (m>>1) & 1;
    b2 = m & 1;

    r = (r & 254) | b0;
    g = (g & 254) | b1;
    b = (b & 254) | b2;

    printf("O novo valor de R: %hhu\n", r);
    printf("O novo valor de G: %hhu\n", g);
    printf("O novo valor de B: %hhu\n", b);


    return 0;
}