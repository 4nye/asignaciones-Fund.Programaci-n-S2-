#include<stdio.h>

int main(){

    int hh,mm,ss;

    printf("ingrese la hora actual en el formato h:m:s");
        scanf( "%d %d %d", &hh, &mm, &ss);

        hh = (hh*3600);
        
        mm = (mm*60);
        
        ss = ((mm+hh)+ss);

        printf("la el tiempo transcurrido en segundos es %d", ss);

    return 0;
}