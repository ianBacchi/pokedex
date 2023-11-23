#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int numero;
    char nome[21];
    char tipo1[11]; 
    char tipo2[11];
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


int main(){

    int menu;
    int cadastro;
    int i = 722;
    int pokesadd;
    char sair[5];


    Pokedex dex[731];  // Vetor para os pokémons

     recebeArquivoPokedex(dex);

     printf("Digite uma opcao\n 1-novo jogo \n 2-sair\n");
     scanf("%d",&menu);

    switch (menu)
    {
    case 1:

        printf("Digite\n 1--caso queira inserir um novo pokemon \n 2--listar \n pesquisar \n 3--alterar \n 4--alterar");
        scanf("%d",&cadastro);

        switch (cadastro)
        {
        case 1:
            
            do
            {

            pokesadd = i - 722;
            printf("voce so pode adicionar 10 pokemons novos, ja foram adicionados %d\n",pokesadd);

            dex[i].numero = i;

            setbuf(stdin, NULL);
            printf("Digite o nome do pokemon\n");
            fgets(dex[i].nome, 21, stdin);
            dex[i].nome[strcspn(dex[i].nome, "\n ")]= '\0';
            
            setbuf(stdin, NULL);
            printf("Digite o tipo 1 do pokemon\n");
            fgets(dex[i].tipo1, 11, stdin);
            dex[i].tipo1[strcspn(dex[i].tipo1, "\n")] = '\0';

            setbuf(stdin,NULL);
            printf("Digite o tipo 2 do pokemon, se nao houver digite NULL");
             fgets(dex[i].tipo2, 11, stdin);
            dex[i].tipo2[strcspn(dex[i].tipo2, "\n")] = '\0';

            setbuf(stdin, NULL);
            printf("Digite o total desse pokemon \n");
            scanf("%d",&dex[i].total);

            setbuf(stdin, NULL);
            printf("Digite a vida desse pokemon \n ");
            scanf("%d",&dex[i].vida);

            setbuf(stdin, NULL);
            printf("Digite o ataque desse pokemon \n");
            scanf("%d",&dex[i].ataque);

            setbuf(stdin, NULL);
            printf("Digite a defesa desse pokemon \n");
            scanf("%d",&dex[i].defesa);

            setbuf(stdin, NULL);
            printf("Digite o ataque especial desse pokemon \n");
            scanf("%d",&dex[i].ataque_especial);

            setbuf(stdin, NULL);
            printf("Digite a defesa especial desse pokemon \n");
            scanf("%d",&dex[i].defesa_especial);

            setbuf(stdin, NULL);
            printf("Digite a velocidade desse pokemon \n");
            scanf("%d",&dex[i].velocidade);

            setbuf(stdin, NULL);
            printf("Digite a geracao desse pokemon \n");
            scanf("%d",&dex[i].geracao);

            setbuf(stdin, NULL);
            printf("Digite 1 se for lendario e 0 para nao lendario \n");
            scanf("%d",&dex[i].lendario);

            setbuf(stdin,NULL);
            printf("Digite a cor do pokemon");
            fgets(dex[i].cor, 11, stdin);
            dex[i].cor[strcspn(dex[i].cor, "\n")] = '\0';

            setbuf(stdin, NULL);
            printf("Digite a altura desse pokemon \n");
            scanf("%f",&dex[i].altura);

            setbuf(stdin, NULL);
            printf("Digite o peso desse pokemon \n");
            scanf("%f",&dex[i].peso);

            setbuf(stdin, NULL);
            printf("Digite a taxa de captura desse pokemon \n");
            scanf("%i",&dex[i].taxa_captura);

            printf("se }deseja sair digite 'sair'" );
            fgets(sair, 5 , stdin);
                
            } while (strcmp(sair, "sair") != 0);
            

            break;

        default:
            break;
        }
        


        
        break;

    case 2: 
        
        return 0;

         break; 
    
    default:
         
         printf("Erro ao escolher uma opcao");

        break;
    }
     


   
return 0;
}