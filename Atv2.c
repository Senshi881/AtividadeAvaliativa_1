/*
2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. 
*/
#include <stdio.h>
#include <math.h>

int main(){
    float Chico = 1.50, Ze = 1.10, chicoA, zeA;
    int r;
    
    printf("Chico possui atualmente 1.50 de altura e Ze possui atualmente 1.10 de altura;");

    for(r = 0; zeA < chicoA; r++){
        float aumentoC, aumentoZ;
        aumentoC = 0.02 * r;
        aumentoZ = 0.03 * r;
        chicoA = Chico + aumentoC;
        zeA = Ze + aumentoZ;
        printf("\nApos %d ano(s) Ze possui %.2f de altura enquanto Chico possui %.2f de altura.\n", r, zeA, chicoA);
    }
    
    printf("\nDemorou %d anos para Ze ficar maior que Chico", r);

    return 0;
}