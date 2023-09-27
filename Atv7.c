/*
7. Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: 
MP = ( n1*2 + n2*4 + n3*3 ) / 10

Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual 
a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.
*/
#include <stdio.h>
#include <math.h>

int main(){
    float MT = 0;

    printf("Para realizarmos a media da turma que e composta por 30 alunos me informe a nota de cada aluno;");
    for(int aluno = 1; aluno < 31; aluno++){
        float n1, n2, n3, MP;

        printf("\nAluno %d;", aluno);
        printf("\nNota 1: ");
        scanf("%f", &n1);
        while(getchar() != '\n');
        printf("\nNota 2: ");
        scanf("%f", &n2);
        while(getchar() != '\n');
        printf("\nNota 3: ");
        scanf("%f", &n3);
        while(getchar() != '\n');

        MP = ( n1 * 2 + n2 * 4 + n3 * 3 ) / 10;
        MT += MP;

        if(MP > 7){
            printf("\nAluno %d Aprovado;", aluno);
        }else{
            printf("\nAluno %d Reprovado;", aluno);
        }
    }
    float media;
    media = MT / 30;
    printf("\nA media de turma e %.2f;", media);

    return 0;
}