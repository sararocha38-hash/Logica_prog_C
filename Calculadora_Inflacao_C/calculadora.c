#include<stdio.h>
int main(){
    float valor, resultado;
    printf("MENU DE INFLACAO\n");
    printf("Se o seu produto tiver pre�o menor que 100, recebe dez porcento de inflacao.\n");
    printf("Se o seu produto tiver pre�o igual ou maior que 100, recebe vinte porcento de inflacao.\n");
    printf("Digite o valor do seu produto:");
    scanf("%f", &valor);
    printf("----------------------------------------------------------------------------------\n");
    if(valor<100){
        resultado=valor+(valor*10/100);
        printf("Com a inflacao, seu produto tera o valor de %.2f", resultado);
    }else{
    resultado=valor+(valor*20/100);
    printf("Com a inflacao, seu produto tera o valor de %.2f", resultado);
    }
return 0;
}
