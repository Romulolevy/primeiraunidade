#include<stdio.h>
#include<stdlib.h>

#define criar_ingresso 0
#define ver_os_recomendados 1
#define mudar_o_preco 2

typedef struct ingreso{
    int preco;
    char local[80];
    char atracao[50];
}Ingresso;

void preenche_ingresso(Ingresso * ingresso){

    printf("Insira o preco do ingresso: \n");
    scanf("%d",&ingresso->preco);
    printf("Informe o local da atração: \n");
    scanf(" %[^\n]",ingresso->local);
    printf("Informe qual a atraçâo do show: \n");
    scanf(" %[^\n]",ingresso->atracao);
};

void imprimir_ingresso(Ingresso * ingresso){
printf("Agrande atracao de hoje é: %s\n Localizado: %s\n Custando miseros: %d",
ingresso->atracao, ingresso->local, ingresso->preco);
};

void mudar_preco(Ingresso * ingresso, float valor){
printf("Informe o novo valor: ");
scanf("%f", &valor);
};

void imprime_maior_menor_preco(Ingresso * ingresso){



};



int main(void){
Ingresso * ingresso;
int op,v;
    
    printf("---------------Seja bem Vindo------------------");
    printf("\nOque deseja fazer: \n (0)- Criar Ingresso \n (1)- Ver os recomendados \n (2)- Mudar o preco\n");
    scanf("%d", &op);
    switch(op) {
        case 0:
            preenche_ingresso(ingresso);   
        break;
        case 1:
            imprime_maior_menor_preco(ingresso);
        break;
        case 2:
            mudar_preco(ingresso, v);
        break;
    }

    return 0;
}