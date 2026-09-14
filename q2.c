#include <stdio.h>
int main (){
    int x, x_antecessor, x_sucessor, y;
    int n, i;

    printf("Digite o valor de n: ");
    scanf ("%d",&n);

    printf ("Digite os dois primeiros valores de x:");
    scanf ("%d %d",&x_antecessor,&x);
    
    for (i = 3; i <=n; i++) {
        printf ("Digite o novo valor de x: ");
        scanf ("%d", &x_sucessor);

        y = (x_antecessor + x + x_sucessor)/3;

        printf ("y = %d\n", y);

        x_antecessor = x;
        x = x_sucessor;
    }

    return 0;
}