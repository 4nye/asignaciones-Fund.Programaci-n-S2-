#include<stdio.h>
#include<string.h>

int main(){
     int ndia=0 , nmes=0 , adia=0, ames=0, ci=0, nyear=0, ayear=0, contf=0, contm=0, contadult=0, contmenors=0, descm=0, desch=0, aux1=0, aux2=0;
      char sexo[5], next[4]="si", next2[4], name[40];

         
         printf("ingrese la fecha actual  [dd/mm/aa]\n");
            scanf("%d %d %d", &adia, &ames, &ayear);

        
        
         


          while (strcmp(next,"si")>=0) {

            printf("ingrese los datos del paciente\n\n");
                
                 printf("nombre del paciente\n");
                    fflush(stdin);
                    fgets(name,40,stdin);

                printf("fecha de nacimiento [dd/mm/aa]\n");
                   scanf("%d %d %d", &ndia, &nmes ,&nyear);
                
                printf("cedula\n");
                   scanf("%d", &ci);

                printf("sexo [h/m]\n");
                    fflush(stdin);
                   fgets(sexo,5,stdin);

                   
                

                ayear = ((ames/12) + (adia/365) + ayear);
                nyear = ((nmes/12)+(ndia/365)+ nyear);
                ayear = (ayear - nyear);


          
                  // contador de edades

                  if (ayear>=18){
                    
                    contmenors++;
                    }

                  else {

                    contadult++;
                  }
                
                  
                    
                    
                    // contador de genero y  aplicacion de las condiciones

                  if (sexo<="m"){

                      contf++;

                        if ((ci%2)==0){
                          
                          printf("el paciente %s ha recibido un descuento\n\n",name);
                          descm++;
                        }
                  }
                  else{

                    contm++;

                          if (ayear>60){

                            printf("el paciente %s ha recibido un descuento\n\n",name);
                            desch++;
                          }
                  }
                
                
                    printf("desea registrar un nuevo paciente? [si/no]\n");
                          fflush(stdin);
                          fgets(next, 4, stdin);
                          aux2= (strcmp(next,"si"));
     
          } 

        printf("se registraron  %d pacientes hombres\n", contm);
          
        printf("se registraron  %d pacientes mujeres\n", contf);

        printf("entre ellos hubieron %d mujeres y %d hombres con el descuento\n", descm, desch);

        printf("hay %d pacientes mayores de edad\n", contadult);

        printf("hay %d pacientes menores de edad", contmenors);


          
    return 0;

}