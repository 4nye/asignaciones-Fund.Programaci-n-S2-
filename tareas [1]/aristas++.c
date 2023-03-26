#include <stdio.h>
#include <math.h>

int main(){
    
    double arist, result;
   
    printf("ingrese el valor de la arista");
    
    scanf("%lf", &arist);
    
    result= (pow(arist, 3));
    
    printf("%lf",result);

    return 0 ;
}
