/*
3. Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo,
e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int ladoA, ladoB, ladoC;
    
    printf("Para descobrirmos o tipo de triangulo e seu triangulo me informe seus lados;\nLado A: ");
    scanf("%d", &ladoA);
    while(getchar() != '\n');

    printf("\nLado B: ");
    scanf("%d", &ladoB);
    while(getchar() != '\n');

    printf("\nLado C: ");
    scanf("%d", &ladoC);
    while(getchar() != '\n');

    if(ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB){
        if(ladoA == ladoB && ladoA == ladoC){
            printf("\nSeu triangulo e Equilatero;");
        }else if(ladoA != ladoB && ladoA != ladoC && ladoB != ladoC){
            printf("\nSeu triangulo e Escaleno;");
        }else{
            printf("\nSeu triangulo e Isosceles;");
        }
    }else{
        printf("\nSeu triangulo nao existe;");
    }


    return 0;
}