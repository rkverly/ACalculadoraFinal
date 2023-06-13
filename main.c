#include <stdio.h>

int main(){
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%f", &num2);

    //soma
    soma = num1 + num2;
    printf("Soma: %.2f\n", soma);

    //Subtração
    subtracao = num1 - num2;
    printf("Subtracao: %.2f\n", subtracao);

    //Multiplicação
    multiplicacao = num1 * num2;
    printf("Multiplicacao %.2f\n", multiplicacao);

    //Divisão
    if(num2 != 0){
        divisao = num1 / num2;
        printf("Divisao %.2f\n", divisao);
    }else{
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}
