#include<stdio.h> 


int main(){

   int n;
  

    printf("ingrese el numero que desea evaluar");
        scanf("%d",&n);


      if ((n%2)<1) {

          printf("%d es par", n);
      }
      else {


         printf("%d es impar", n);
      }


     

    return 0; 
}