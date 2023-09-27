/*
9. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.
*/
#include <stdio.h>

int main(){
    int reset, c1 = 0, c2 = 0, c3 = 0, c4 = 0, vn = 0, vb = 0;
    do{
        int voto;
        printf("\nEm quem voce quer votar? \nCandidatos - 1, 2, 3, 4; \nVoto nulo - 5; \nVoto em branco - 6\n");
        scanf("%d", &voto);
        while(getchar() != '\n');
        switch(voto){
            case 1:
            printf("\nCandidato 1;");
            c1++;
            break;
            case 2:
            printf("\nCandidato 2;");
            c2++;
            break;
            case 3:
            printf("\nCandidato 3;");
            c3++;
            break;
            case 4:
            printf("\nCandidato 4;");
            c4++;
            break;
            case 5:
            printf("\nVoto Nulo;");
            vn++;
            break;
            case 6:
            printf("\nVoto em Branco;");
            vb++;
            break;
            default:
            printf("\nInsira um voto valido;");
            break;
        }
        printf("\nDeseja realizar outro voto? \n1 - Sim; \n0 - Nao;\n");
        scanf("%d", &reset);
        while(getchar() != '\n');
    } while(reset != 0);
    printf("\nO voto atualmente esta de: \nCandidato 1: %d; \nCandidato 2: %d; \nCandidato 3: %d; \nCandidato 4: %d; \nVotos Nulos: %d; \nVotos em Branco: %d; ", c1, c2, c3, c4, vn, vb);

    return 0;
}