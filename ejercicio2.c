/*Valeria IraIS rAMÍREZ sÁNCHEZ
Practica 6
Ejercicio de tiposde variables; entradas y salidas*/

#include <stdio.h>

void main()
{
    int entnum;
    char carac=65;// convierte el número en caraćter ASCII
    char carac2='a'
    double punto;
    
    //Asignar valores de teclado a una variable
    printf("Escriba un valor entero:");
    scanf("%i", &entnum);  //entero
    printf("Escriba un valor real:");
    scanf("%lf", &punto);  //long float
    
    //Imprimir valores de formato 
    printf("\n imprimir las variables \a\n");  // n salto de carril
    printf("\t valor de número entero es: %i \n", entnum);  // t tabulador
    printf("\t valor de los carácteres ASCII es: %c \n", carac);  // carácteres
    printf("\t valor del carácter es: %c \n", carac2);
    printf("\t valor del número real es: %lf \n", punto);
    
}
