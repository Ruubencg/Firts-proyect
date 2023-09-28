#include <stdio.h>
//Creación de calculadora

    int main(){
        /* Declaración de variables. */
        int num1,num2;
        /* Elimina los comentarios y sustituye los
        interrogantes por el tipo de datos correspondiente. */
        int sum,res,prod,div_e,mod, suma,media, operacion_;
        float div_f;
        /* Cuerpo de programa */
        printf("Bienvenido/a a \"Calculadora v1.0\".\n");
        printf("\n");
        printf("Introduce Primer operando:\t");
        scanf("%d", &num1);
        printf("Introduce Segundo operando:\t");
        scanf("%d", &num2);
        printf("\n");
        printf("...calculando resultados...\n");

// Calcula suma (éste te lo damos hecho)
        sum = num1 + num2;
// Calcula resta (no te olvides de sustituir los interrogantes...)
        res = num1 - num2;
        // Calcula producto (completa el código)
        prod = num1*num2;
// Calcula división entera

    div_e= num1 /  num2;
    // Calculo de division real
    div_f = (float) num1 / (float) num2;
    // Calculo division modulo
    mod =  num1 % num2;
    // Suma del primer numero mas el doble del segundo
    suma = num1 + 2*num2 ;

    // Media de ambos numeros
    media = (num1 + num2) / 2;
    //La mitad de la suma del primer número más el doble del segundo

    operacion_ = (num1 + 2*num2)/2 ;


//Muestra los resultados
        printf("Suma:%d\n", sum);
        printf("Resta:%d\n", res);
        printf("Producto:%d\n", prod);
        printf("Division entera:%d\n", div_e);
        printf("Division real:%0.2f\n",div_f);
        printf("Division de modulo: %d\n", mod);
        printf("Suma Doble:%d\n", suma);
        printf("La media es:%d\n", media);
        printf("\nAdios \n");
        return 0;
    }





