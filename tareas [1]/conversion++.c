#include<stdio.h>

int main() {

    float dolar;
     
    printf("ingrese la cantidad de $ disponible");
        scanf("%f", &dolar);

     dolar= (dolar/166.386); 

     printf(" el equivalente en euros es %f", dolar);


    return 0; 
}