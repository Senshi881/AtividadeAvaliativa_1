/*
6. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. 
A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). 
Se o ponto estiver na origem, escreva a mensagem “Origem”. 
Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. 
*/
#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1;

    printf("Para descobrirmos o Quadrante dos pontos no plano me informe os quatro valores;\nInsira o valor de X1: ");
    scanf("%lf", &x1);
    while(getchar() != '\n');
    printf("\nInsira o valor de Y1: ");
    scanf("%lf", &y1);
    while(getchar() != '\n');

    if(x1 == 0 && y1 == 0){
        printf("Origem;");
    }else if(x1 == 0){
        printf("Seu ponto esta no Eixo Y;");
    }else if(y1 == 0){
        printf("Seu ponto esta no Eixo X;");
    }else if(x1 > 0 && y1 > 0){
        printf("Os pontos fazem parte do Quadrante 1;\nQ1;");
    }else if(x1 < 0 && y1 > 0){
        printf("Os pontos fazem parte do Quadrante 2;\nQ2;");
    }else if(x1 < 0 && y1 < 0){
        printf("Os pontos fazem parte do Quadrante 3;\nQ3;");
    }else{
        printf("Os pontos fazem parte do Quadrante 4;\nQ4;");
    }

    return 0;
}