#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numero;
    char nome[20];
    char tipo1[10];
    char tipo2[10];
    int total;
    int vida;
    int ataque;
    int defesa;
    int ataque_especial;
    int defesa_especial;
    int velocidade;
    int geracao;
    int lendario;
    char cor[10];
    float altura;
    float peso;
    int taxa_captura;
} Pokemon;

int main(){

    Pokemon Dados_pokedex[722];  // Vetor para os pokémons
    FILE *arq_pokedex = fopen("pokedex.csv", "r");

    if (arq_pokedex == NULL) { // caso de erro ao abrir arquivo
        printf("Erro ao abrir arquivo pokedex.csv\n");
        return (1);
    }
return 0;
}