/*
4. Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, 
e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, 
Triângulo Acutângulo < 90º)
*/
#include <stdio.h>
#include <math.h>

int main(){
    int ladoA, ladoB, ladoC;
    
    printf("Para descobrirmos o tipo de angulo de seu triangulo me informe seus lados;\nLado A: ");
    scanf("%d", &ladoA);
    while(getchar() != '\n');

    printf("\nLado B: ");
    scanf("%d", &ladoB);
    while(getchar() != '\n');

    printf("\nLado C: ");
    scanf("%d", &ladoC);
    while(getchar() != '\n');

    if(ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB){
            ladoA = pow(ladoA,2);
            ladoB = pow(ladoB,2);
            ladoC = pow(ladoC,2);
        if(ladoA == (ladoB + ladoC)){
            printf("\nSeu triangulo e Retangulo;");
        }else if(ladoA > (ladoB + ladoC)){
            printf("\nSeu triangulo e Obtusangulo;");
        }else{
            printf("\nSeu triangulo e Acutangulo;");
        }
    }else{
        printf("\nSeu triangulo nao existe;");
    }


    return 0;
}