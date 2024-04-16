#include <stdio.h>

main(){
    float a, b, c, menor;
    printf("N�meros a b c : ");
    scanf("%g %g %g", &a, &b, &c);
    if (a < b)
    if (a < c)
    menor = a;
    else
    menor = c;
    else
    if (b < c)
    menor = b;
    else
    menor = c;
    printf("Menor = %g\n", menor);
}

 
