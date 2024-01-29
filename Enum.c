//Questão 1.
#include <stdio.h>

typedef enum genero{
    masculino,
    feminino
}Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero genero_pessoa;
}Pessoa;

void get_dados(Pessoa * pessoa){
    printf("Informe o nome: \n");
    scanf("%[^\n]", pessoa->nome);
    printf("Informe a idade: \n");
    scanf("%d", &pessoa->idade);
    printf("Informe o genero:\n 0-Masculino \n 1-Feminino");
    scanf("%d", &pessoa->genero_pessoa);
}

void imprime_pessoa(Pessoa * pessoa){
    printf("Nome: %s\n Idade:%d\n Genero:%s", pessoa->nome,
    pessoa->idade, pessoa->genero_pessoa==masculino?
    "Masculino":"Feminino");
}

int main(void){
    
    Pessoa * pessoa_;
    get_dados(&pessoa_);
    imprime_pessoa(&pessoa_);
    imprime_pessoa(&pessoa_);
    
    return 0;
}

//Questão 2.
#include <stdio.h>

typedef enum tipo{
    Alimento,
    Bebida,
    Eletronico
}Tipo;

typedef struct produto{
    char nome[30];
    int valor;
    char tipo[15];
}Produto;

void cad_produtos(Produto * produto){
    printf("Insira o nome do produto: \n");
    scanf("%[^\n]", produto->nome);
    printf("Insira o Preço do Produto: \n");
    scaanf("%d", &pruduto->valor);
    printf("Insira o tipo de Produto:\n 0- Alimento \n 1- Bebida \n 2- Eletronico");
    scanf("%[^\n]", produto->tipo);
}

void imprime_produto(Produto * produto){
printf("Nome do Produto:%s \n Valor do Produto:%d \n Tipo do Produto:%s",
produto->nome, produto->valor, produto->tipo);
}

int main(void){

Produto * produto;
cad_produtos(&produto);
imprime_produto(&produto);
    return 0;
}

//Questão 3.
#include <stdio.h>


