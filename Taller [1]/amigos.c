#include<stdio.h> 


int main(){
   
   int num1=0, num2=0, i=0, j=0, sdv1=0, sdv2=0;

    printf("ingrese los numeros que quiere verificar\n");
        scanf("%d %d", &num1, &num2);

    
     for ( i = 1; i < num1; i++){
        
        if ((num1%i)==0){
            sdv1=sdv1+i;
        }
     }
    printf("la suma de los divisores de %d es %d\n", num1,sdv1);

     
     for ( j = 1; j < num2; j++){
        
        if ((num2%j)==0){
            sdv2=sdv2+j;
        }
     }
    printf("la suma de los divisores de %d es %d\n", num2,sdv2);

    if ((sdv1==num2)&&(sdv2==num1)){
        printf("estos numeros son amigos");
    }
    else
    {
         printf("estos numeros no son amigos");
    }
    
    return 0;
}

