#include<stdio.h>
#include<math.h>



int  main(){

    int aux=0,num=0,mod=0,div=0, inv=0,cif=0, ctrs=0, ccnc=0;
    
     printf("ingrese el numero que desea chequear\n");
        scanf("%d", &num);
           
           aux= num;
        // cantidad de cifras
        do {
          aux=(aux/10);
          cif++;

         } while((aux/10)!=0);

         aux=cif;
         
        do{
            
            //contador de 5's y 3's

            if ((num%10)==3){
               ctrs++;
            }
            if ((num%10)==5){
              ccnc++;
            }
            inv=(inv+((num%10)*pow(10,cif)));
            num=(num/10);
            
            cif--;
        } while (num!=0);

        if (aux>=2){
            printf("el numero que usted ingreso dado la vuelta es %d\n",inv);
             printf("ademas se han ingresado un total de %d [3's] y %d [5's]",ctrs,ccnc);
        }
        else
        {
              printf("Se han ingresado un total de %d [3's] y %d [5's]",ctrs,ccnc);
        }
        

    return 0;
}

