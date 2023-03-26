#include<stdio.h>

int main(){


    float n, mid, ter;
    float cafe= 3;
    float azucar = 0.72;

    printf("cuanto dinero se tiene disponible?");
        scanf("%f", &n);

    mid=(n/2);
    ter=(n/3);

    cafe= (ter/cafe);
    
    azucar= (mid/azucar);

    n=(n-(mid+ter));

    printf("con %f $ se pueden comprar %f kilos de azucar %f kilos de cafe sobrando %f$", (n+(mid+ter)), azucar, cafe, n); 
  

    return 0;
}
