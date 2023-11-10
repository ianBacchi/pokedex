#ifndef Pokedex_h
#define Pokedex_h


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
} Pokedex;


void recebeArquivoPokedex(Pokedex* dex);

#endif 