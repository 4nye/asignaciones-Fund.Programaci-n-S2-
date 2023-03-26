#include<stdio.h> 

int main(){

 int x,y,z;

 printf("ingrese los tres numeros correspondientes");
    scanf("%d %d %d", &x, &y, &z);

     if (x>y){
        
        if(x>z){

         printf("%d es el mayor", x);

        }
        
        else {

          printf("%d es el mayor", z);

        }
        
    }
     else 

          if (y>z) {
          
           printf("%d es el mayor", y);

         }

         else {

          printf("%d es el mayor", z);
         }


    return 0;
}