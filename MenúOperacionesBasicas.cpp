#include <stdio.h>

double total; 

main() {
    int opc;
    for (;;) {
        printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opc);

        switch(opc) {
            case 1: {
                int a, b;
                short c, d;
                printf("Introduce cuatro numeros para la suma: ");
                scanf("%d %d %hd %hd", &a, &b, &c, &d);
                total = a + b + c + d;
                printf("El resultado de la suma es: %.2lf\n", total);
                break;
            }
            case 2: {
                int a, b;
                short c, d;
                printf("Introduce cuatro numeros para la resta: ");
                scanf("%d %d %hd %hd", &a, &b, &c, &d);
                total = a - b - c - d;
                printf("El resultado de la resta es: %.2lf\n", total);
                break;
            }
            case 3: {
                float a;
                double b;
                printf("Introduce dos numeros para la multiplicacion: ");
                scanf("%f %lf", &a, &b);
                total = a * b;
                printf("El resultado de la multiplicacion es: %.2lf\n", total);
                break;
            }
            case 4: {
                float a;
                double b;
                printf("Introduce dos numeros para la division: ");
                scanf("%f %lf", &a, &b);
                if(b != 0) {
                    total = a / b;
                    printf("El resultado de la division es: %.2lf\n", total);
                } else {
                    printf("Error: Division por cero no esta permitida.\n");
                }
                break;
            }
            case 5:
                return 0;
            default:
                printf("Opcion incorrecta.\n");
        }
    }
   
}

