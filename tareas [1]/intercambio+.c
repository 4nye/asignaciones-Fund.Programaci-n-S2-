#include<stdio.h>

int main(){

    int v1, v2;

    printf( "ingrese los valores de que desea intercambiar \n");
        
        scanf("%d", &v1);
        scanf("%d", &v2);

    printf("v1=%d y v2=%d \n", v1,v2);

        v1= v1+v2;

        v2= v1-v2;

        v1= v1-v2;
    


printf("ahora \n v1=%d y v2=%d", v1,v2);

    return 0;
}