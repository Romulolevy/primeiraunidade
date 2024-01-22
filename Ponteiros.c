//Questão1
//O valor de X = 3, Y = 0 e P = 5

//Questão2
//(A)
// A mensagem é de advertencia

//(B)
// Pela falta do &

//(C)
// NÃO

//(D)
// int main(void) {
// int x, *p;
// x = 100;
// p = &x;
// printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
// }

//(E)
// SIM

//Questão3
//A = 10, B = 20, C = 10 e D = 11

//Questão4
#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro){
*area = (3*pow(l,2))*(sqrt(3))/2;
*perimetro = 6*l;
}

int main() {

float l, a, p;

printf("Informe o valor do lado do exagono: ");
scanf("%f",&l);

calcula_hexagono(l, &a, &p);
printf("O area do hexagono é: ", a);
printf("Operimetro do haxagono é: ", p);

return 0;
}