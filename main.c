//Author: amedeo39

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char** argv) {
    int i, j, num, v[N];
    
    for(i=0; i<N; i++){
        printf("Inserire un numero in posizione %d: ",i);
        scanf("%d", &num);
        
        for(j=i; (j>0) && (v[j-1]>num); j--){
            v[j]=v[j-1];
        }
        
        v[j]=num;
    }
    
    for(i=0; i<N; i++){
        printf("\nVettore [%d]: %d",i,v[i]);
    }
    return (EXIT_SUCCESS);
}

