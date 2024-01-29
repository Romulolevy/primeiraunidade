#include <stdio.h>
#include <stdlib.h>
// Estrutura para armazenar um documento por vez
typedef union documentos{
    char rg[15];
    char cpf[15];
}Documentos;

typedef struct pessoa{
    char nome[20];
    int idade;
    Documentos doc; // Variavel pra armazenar o CPF ou RG
}Pessoa;

void dados_pessoa(Pessoa * p){
    /*
    Função que preenche os dados de uma variavel 
    do tipo pessoa (struct)
    */
    printf("Informe o nome: \t");
    scanf("%[^n]", p->nome);
    printf("\nInforme a idade: \t");
    scanf("%d", &p-> idade);
    printf("Digite 1 para CPF ou 0 para RG");
    scanf("%d", &opcao);
    if(opcao){
        scanf(" %[^\n]", p->doc.cpf);
    }
    else{
        scanf(" %[^\n]", p->doc.rg);
    }
    
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    dados_pessoa(&pessoa); // a função recebe o endereço da variavel
    printf("CPF = %s \n RG=%s", pessoa->doc.cpf, pessoa->doc.rg);
    free(pessoa);

    return 0;
}