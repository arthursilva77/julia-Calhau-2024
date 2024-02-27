#include <stdio.h>
int main(){

//definição de variaveis
int a, b, c, d, e;

printf("digite tres numeros inteiros:\n");
//entrada

scanf("%d %d %d",&a,&b, &d);
//processamento
c = a + b;
e = c * d;
printf("a soma de a + b = %d", c);
printf("\n");
printf("a multiplicacao de c * d = %d", e);
return 0;
}

