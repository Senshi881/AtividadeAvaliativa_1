/*
10. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. 
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
#include <string.h>
#include <math.h>
#include <limits.h>

int main() {
    char cidadeMaior[300], cidadeMenor[300], estadoMaior[3], estadoMenor[3];
    int acidentesV, cidadesQ, maiorI = 0, menorI = INT_MAX, codigoCMaior, codigoCMenor, veiculosP, veiculosPT = 0;
    float indiceP, indiceC, mediaV, vitimasRS = 0, vitimasRST = 0;

    printf("Dados sobre acidentes de transito; \nQuantas cidades deseja comparar? ");
    scanf("%d", &cidadesQ);
    while(getchar() != '\n');
    if(cidadesQ > 200){
        cidadesQ = 0;
        printf("Limite de cidades excedido;\n[MAX: 200]");
    }

    for(int i = 0; i < cidadesQ; i++){
        int codigoC;
        char estado[3];

        printf("\nQual o codigo da cidade? ");
        scanf("%d", &codigoC);
        while(getchar() != '\n');
        printf("\nEssa cidade e de qual Estado?\n(Informe com a sigla, por exemplo: RS, SC, PR, SP, RJ, ...)\n");
        scanf("%s", estado);
        while(getchar() != '\n');
        printf("\nNessa cidade possui quantos veiculos de passeio? ");
        scanf("%d", &veiculosP);
        while(getchar() != '\n');
        printf("\nQual e a quantidade de acidentes de transito com vitimas? ");
        scanf("%d", &acidentesV);
        while(getchar() != '\n');

        indiceP = ((float)acidentesV * 100) / (float)veiculosP;

        if(strcasecmp(estado, "AC") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d do Acre possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Acre possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP; 
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Acre possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "AL") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Alagoas possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Alagoas possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Alagoas possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "AP") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Amapa possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Amapa possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Amapa possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "AM") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Amazonas possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Amazonas possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Amazonas possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "BA") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Bahia possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Bahia possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Bahia possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "CE") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Ceara possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Ceara possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Ceara possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "DF") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Distrito Federal possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Distrito Federal possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Distrito Federal possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "ES") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Espirito Santo possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Espirito Santo possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Espirito Santo possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "GO") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Goias possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Goias possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Goias possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "MA") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Maranhao possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Maranhao possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Maranhao possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "MT") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Mato Grosso possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Mato Grosso possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Mato Grosso possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "MS") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Mato Grosso do Sul possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Mato Grosso do Sul possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Mato Grosso do Sul possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "MG") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Minas Gerais possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Minas Gerais possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Minas Gerais possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "PA") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Para possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Para possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Para possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "PB") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Paraiba possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Paraiba possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Paraiba possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "PR") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Parana possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Parana possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Parana possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "PE") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Pernambuco possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Pernambuco possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Pernambuco possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "PI") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Piaui possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Piaui possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Piaui possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "RJ") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Rio de Janeiro possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Rio de Janeiro possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Rio de Janeiro possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "RN") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Rio Grande do Norte possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Rio Grande do Norte possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Rio Grande do Norte possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "RS") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Rio Grande do Sul possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
                vitimasRS += acidentesV;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Rio Grande do Sul possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Rio Grande do Sul possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "RO") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Rondonia possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Rondonia possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Rondonia possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "RR") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Roraima possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Roraima possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Roraima possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "SC") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Santa Catarina possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Santa Catarina possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Santa Catarina possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "SP") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Sao Paulo possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Sao Paulo possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Sao Paulo possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "SE") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Sergipe possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Sergipe possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Sergipe possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else if(strcasecmp(estado, "TO") == 0){
            if(indiceP > maiorI){
                codigoCMaior = codigoC;
                sprintf(estadoMaior, "%s", estado);
                sprintf(cidadeMaior, "A cidade %d de Tocantins possui a maior porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;",  codigoCMaior, veiculosP, indiceP);
                maiorI = indiceP;
                veiculosPT += veiculosP;
            }else if(indiceP < menorI && maiorI < menorI){
                codigoCMenor = codigoC;
                sprintf(estadoMenor, "%s", estado);
                sprintf(cidadeMenor, "A cidade %d do Tocantins possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                menorI = indiceP;
                veiculosPT += veiculosP;
            }else{
                indiceC = indiceP;
                veiculosPT += veiculosP;
                if(menorI != indiceP){
                    sprintf(estadoMenor, "%s", estado);
                    sprintf(cidadeMenor, "A cidade %d do Tocantins possui a menor porcentagem de indice de acidentes com vitimas com uma quantidade de %d veiculos de passeio com a porcentagem de %.2f%%;", codigoCMenor, veiculosP, indiceP);
                }
            }

        }else{
            printf("\nNenhum estado encontrado;");
        }
        printf("\n*REGISTRADO*\n");
    }

    mediaV = (float)veiculosPT / cidadesQ;
    vitimasRST = vitimasRS / (float)cidadesQ;
    

    printf("\n%s\n%s\nA media de veiculos nas cidades brasileiras e de %.0f;\nA media de acidentes com vitimas entre as cidades do Rio Grande do Sul e de %0.f;", cidadeMaior, cidadeMenor, mediaV, vitimasRST);

    return 0;
}