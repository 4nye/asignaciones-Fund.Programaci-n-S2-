#include<stdio.h>

int main(){

    int monto=0, mt=0, mtw=0,cprp=0, ci=0, ciw=0, cantp=0, ctrp=0, ccncp=0, cw=0;
     char et, next1='Y', nxt2='Y';


     while (next1=='Y'){
    
     monto=0;
     cprp=0;
     mt=0;
     printf("ingrese la C.I del cliente\n");
        scanf("%d", &ci);
     
    
     printf("datos del/los producto/s\n");
    
     do {
       printf("etiqueta\n");
          fflush(stdin);
           scanf(" %c", &et);
          
       printf("monto del producto\n");
         scanf("%d", &monto);
         
          mt=(mt+monto);
         
           if ((et=='M')||(et=='A')){
               cprp++;
    
         }
         

         printf("desea registrar algun otro producto? [Y/N]");
            fflush(stdin);
            scanf(" %c", &nxt2);

     } while (nxt2=='Y');
            
            
            if ((cprp>=3)&&((mt>=1000)&&(mt<=5000))){
            cantp++;
            mt=((mt*50)/100);

            if((ci%2)==0){
               
               mt=((mt*5)/100);
               ccncp++;

            }
            else{
               mt=((mt*3)/100);
                ctrp++;

            }

            if (mt==mtw) {
                cw++;
             }
             else {
                
                if (mt>mtw) {
                    mtw=mt;
                    cw++;
                    ciw=ci;
                } 
             }
            }


         printf("desea registrar algun otro cliente? [Y/N]");
            fflush(stdin);
            scanf(" %c", &next1);

     }



    
     printf("%d clientes obtuvieron un descuento del 50 porciento\n",cantp);
     printf("%d clientes obtuvieron un descuento del 55 porciento\n",ccncp); 
     printf("%d clientes obtuvieron un descuento del 53 porciento\n",ctrp);
      
      if (cw>1){

        printf("%d clientes obtubieron la gifscard", cw);
      }

      else{
        if(cw==1){
          printf("el cliente ganador de la gift card es el portador de la cedula %d", ciw);
        }
      }

return 0;
}