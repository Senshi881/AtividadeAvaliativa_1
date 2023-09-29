/*
10. Foi feita uma estatística nas para coletar dados sobre acidentes de trânsito. 
Foram obtidos os seguintes dados:  

- código da cidade
- estado (RS, SC, PR, SP, RJ, ...)
- número de veículos de passeio (em 1992)
- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:

a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
b) qual a média de veículos nas cidades brasileiras
c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.
*/
#include <stdio.h>

int main(){
    float mediaS = 0, mediaF = 0, maiorS, salarioP = 0, salario, salarioT;
    int filhos = 0, reset = 0, habitanteS = 0, habitantes = 0, filhosT = 0;

    printf("Habitantes:");
    do{
        habitantes++;

        printf("\nQuanto esse habitante recebe? ");
        scanf("%f", &salario);
        while(getchar() != '\n');
        if(salario < 0){
            salario = 0;
            reset++;
        } else {
        printf("\nQuantos filhos esse habitante tem? ");
        scanf("%d", &filhos);
        while(getchar() != '\n');
        if(salario > maiorS){
            maiorS = salario;
        } else {
            maiorS = maiorS;
        }
        if(salario <= 100){
            habitanteS++;
        } else {
            habitanteS = habitanteS;
        }

        salarioP = (habitanteS * 100) / habitantes;
        filhosT += filhos;
        salarioT += salario;
        mediaF = (float)filhosT / habitantes;
        }
        printf("Deseja informar sobre outro habitante? \n(Caso nao queira insirir um novo habitante informe um salario negativo)");
    } while (reset != 1);
    mediaS = salarioT / habitantes;

    printf("\nA media do salario da populacao e de R$%.2f; \nA media de numero de filhos da populacao e de %.0f; \nO maior salario e de R$%.2f; \nE o percentual de pessoas com salario de ate R$100 e de %.0f%%", mediaS, mediaF, maiorS, salarioP);

    return 0;
}