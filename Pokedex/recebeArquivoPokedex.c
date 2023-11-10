#include <stdio.h>
#include <stdlib.h>
#include "Pokedex.h"

void recebeArquivoPokedex(Pokedex* dex){ 
  char *aux;
  char linha[500];
  int i = 0; 
  FILE* arq = fopen("pokedex.csv","r"); //ABRE ARQUIVO

  dex = (Pokedex*) malloc(sizeof(Pokedex)*721); //ALOCA MEMORIA

  while(i < 721 && !fgets(linha,500,arq)){//Se não for final de arquivo e a leitura da linha foi feita com sucesso
  
    aux = strtok(linha,","); //NUMERO
    dex[i].numero = atoi(aux);
    printf("NUMERO: %d", dex[i].numero); //PRINT DE CONTROLE DE TESTE

    aux = strtok(NULL,","); //NOME
    strcpy(dex[i].nome,aux);
    printf("NOME: %s", dex[i].nome); //PRINT DE CONTROLE DE TESTE

    aux = strtok(NULL,",");
    strcpy(dex[i].tipo1, aux);
    printf("TIPO 1: %s", dex[i].tipo1);

    aux = strtok(NULL, ","); // TIPO 2
    strcpy(dex[i].tipo2, aux);
    printf("TIPO 2: %s\n", dex[i].tipo2);

    aux = strtok(NULL, ","); // TOTAL
    dex[i].total = atoi(aux);
    printf("TOTAL: %d\n", dex[i].total);

    aux = strtok(NULL, ","); // VIDA
    dex[i].vida = atoi(aux);
    printf("VIDA: %d\n", dex[i].vida);

    aux = strtok(NULL, ","); // ATAQUE
    dex[i].ataque = atoi(aux);
    printf("ATAQUE: %d\n", dex[i].ataque);

    aux = strtok(NULL, ","); // DEFESA
    dex[i].defesa = atoi(aux);
    printf("DEFESA: %d\n", dex[i].defesa);

    aux = strtok(NULL, ","); // ATAQUE ESPECIAL
    dex[i].ataque_especial = atoi(aux);
    printf("ATAQUE ESPECIAL: %d\n", dex[i].ataque_especial);

    aux = strtok(NULL, ","); // DEFESA ESPECIAL
    dex[i].defesa_especial = atoi(aux);
    printf("DEFESA ESPECIAL: %d\n", dex[i].defesa_especial);

    aux = strtok(NULL, ","); // VELOCIDADE
    dex[i].velocidade = atoi(aux);
    printf("VELOCIDADE: %d\n", dex[i].velocidade);

    aux = strtok(NULL, ","); // GERACAO
    dex[i].geracao = atoi(aux);
    printf("GERACAO: %d\n", dex[i].geracao);

    aux = strtok(NULL, ","); // LENDARIO
    dex[i].lendario = atoi(aux);
    printf("LENDARIO: %d\n", dex[i].lendario);

    aux = strtok(NULL, ","); // COR
    strcpy(dex[i].cor, aux);
    printf("COR: %s\n", dex[i].cor);

    aux = strtok(NULL, ","); // ALTURA
    dex[i].altura = atof(aux);
    printf("ALTURA: %.2f\n", dex[i].altura);

    aux = strtok(NULL, ","); // PESO
    dex[i].peso = atof(aux);
    printf("PESO: %.2f\n", dex[i].peso);

    aux = strtok(NULL, ","); // TAXA DE CAPTURA
    dex[i].taxa_captura = atoi(aux);
    printf("TAXA DE CAPTURA: %d\n", dex[i].taxa_captura);
    i++;
  }

fclose(arq);
  }//Le arq .csv