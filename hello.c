#include<stdio.h>
int main(void){
    char nombre[50];
    printf ("Introduzca su nombre: ");
    scanf ("%s", nombre);
    printf("Hola %s!\n", nombre);
    return 0;
}