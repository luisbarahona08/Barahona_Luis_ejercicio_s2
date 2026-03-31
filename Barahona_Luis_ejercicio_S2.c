#include <stdio.h>
int main(){
int n, i, A[50];
      
    printf("Ingrese la cantidad de elementos que quiere ingresar para el vector para el vector: ");
    scanf("%d", &n);
    for(i=0; i<n ; i++){
        printf("%d ", i);
        scanf("%d", &A[i]);
    }
    for(i=0; i<n ; i++){
    printf("Los numeros ingresados son: %d\n", A[i]); 
    }
    return 0;
}
