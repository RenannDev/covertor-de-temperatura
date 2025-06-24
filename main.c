/*  Cnvertor de temperatura*/

#include <stdio.h>

;int main(){
    char escolha = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Escolha a conversao:\n");
    printf("1 - Fahrenheit para Celsius\n");
    printf("2 - Celsius para Fahrenheit\n");
    printf("Digite sua escolha: ");
    scanf("%c", &escolha);

    if (escolha == '1') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit = %.1f Celsius\n", fahrenheit, celsius);
    } else if (escolha == '2') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius = %.1f Fahrenheit\n", celsius, fahrenheit);
    } else {
        printf("Escolha invalida!\n");
    }

    
    return 0;
}