#include <stdio.h>
 main(){  
    double la = 5.0;
    double ba = 8.0;
    double al = 6.0;
    double ra = 3.0;
 const double PI = 3.14;
    int opc;
	    printf(" Seleccione una opcion:\n ");
	    
		printf("1.-Cuadrado\n");
	    
		printf("2.-Rectangulo\n");
	    
		printf("3.-Triangulo\n");
	    
		printf("4.-Circulo\n");

 scanf("%d",&opc);

	

switch (opc)
{
  case 1: {
            double ac = la * la;
            printf("Area del Cuadrado: %.2lf\n", ac);
            break;
        }
        case 2: { 
            double ar = ba * al;
            printf("Area del Rectangulo: %.2lf\n", ar);
            break;
        }
        case 3: { 
            double tr = (ba * al) / 2.0;
            printf("Area del Triangulo: %.2lf\n", tr);
            break;
        }
        case 4: { 
            double arc = PI * ra * ra;
            printf("Area del Circulo: %.2lf\n", arc);
            break;
        }
        default:
            printf("Opción no reconocida.\n");
    }
}
