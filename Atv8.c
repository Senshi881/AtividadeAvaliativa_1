/*
8. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.
A prefeitura deseja saber:  

a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .
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