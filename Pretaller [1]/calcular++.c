#include<stdio.h> 



int main() { 
  
  //inicializacion
     int cnum=0, num=0, contp=0, contimp=0, contprim=0, f=1, contz=0, i=0, mod=0,x=0;


  //inicio
     
      printf("ingrese la cantidad de numeros que desea introducir");

         scanf("%d", &cnum);

// contador par/impar  
       
      for (i = 0; i < cnum; i++) {

         x= 0 ;
         f= 1 ;
        
         printf("ingrese el %d numero", i);
            scanf("%d",&num);

         
      if ((num%2)==0){

         contp++;

      }

       else{

       contimp++;

      }
       
//numeros primos
        
        while (f<=num){

           if ((num%f)==0){
               x=(x+1);
           }
         f= (f+1);
        }

        if (x==2){

          contprim++;
        }
        
//contador de 0's
        do{
         if ((num%10)==0){

            contz++;
         }

          num = (num/10);
    
         } while (num!=0);


      }

//salidas    

      printf("hay %d numeros pares\n", contp);
      printf("hay %d numeros impares\n",contimp);
      printf("hay %d numeros primos\n ", contprim);
      printf("hay %d 0's \n" ,contz);


    
    return 0;
}

//fin
