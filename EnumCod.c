#include <stdio.h>

//Estruruta union
typedef union tipodados{
    int meu_int;
    float meu_float;
}Dados;

int main(void){

Dados uniao;
printf("Digiete os dados: \t");
scanf("%d %f", &uniao.meu_int, &uniao.meu_float);
printf("Os dados informados: meu_int = %d meu_float=%f",
uniao.meu_int, uniao.meu_float);

return 0;
}