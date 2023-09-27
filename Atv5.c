/*
5. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule 
a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: 
*/
#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2, distancia;

    printf("Para descobrirmos a distancia entre os pontos me informe os quatro valores;\nInsira o valor de X1: ");
    scanf("%lf", &x1);
    while(getchar() != '\n');
    printf("\nInsira o valor de Y1: ");
    scanf("%lf", &y1);
    while(getchar() != '\n');
    printf("\nInsira o valor de X2: ");
    scanf("%lf", &x2);
    while(getchar() != '\n');
    printf("\nInsira o valor de Y2: ");
    scanf("%lf", &y2);
    while(getchar() != '\n');

    distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    printf("\nA Distancia e de %.4lf", distancia);

    return 0;
}