#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()     //int -тип переменной
{SetConsoleCP(1251);
 SetConsoleOutputCP(1251);

 double a, b, c, determinant, root1,root2, realPart, imaginaryPart;

 printf("Введите коэффициенты a,b,c: ");//5 6 7
 scanf("%lf %lf %lf", &a, &b, &c);

 determinant = b*b-4*a*c; //6*6-4*5*7    = -104

 if (determinant > 0)
 {
     root1 = (-b+sqrt(determinant))/(2*a);
     root2 = (-b-sqrt(determinant))/(2*a);
     printf("root1 = %.2lf и root2 = %.2lf\n", root1, root2);
 }
 else if (determinant == 0)
    {root1 = root2 =-b/(2*a);
    printf("root1 = root2 = %.2lf;\n", root1);
    }
 else
    {realPart = -b/(2*a);  // -6/(2*5)   = -0.6
    imaginaryPart = sqrt(-determinant)/(2*a); //   -10,198 / (2*5)    = -1.0198
    printf("root1 = %.2lf+%.2lfi и root2 = %.2f-%.2fi\n",realPart, imaginaryPart, realPart, imaginaryPart);
    }////root1  -0,6 + (-1.0198)

    //// root2  -0.6 - (-1.0198)


 return 0;
}
