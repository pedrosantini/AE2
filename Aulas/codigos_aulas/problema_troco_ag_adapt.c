#include <stdio.h>
#include <stdlib.h>

int* problema_troco_ag(int moedas[], int n, int troco){
    int *moeda = (int*) malloc(sizeof(int)*200);
    int i=0;
    while(troco > 0 && i < n){
        if (troco / moedas[i] > 0){
            for(int k=0; k < troco/moedas[i]; k++)
                moeda[k+i] = moedas[i];
            
            troco = troco % moedas[i];
        }
        i++;
    }


    return moeda;
}

int main(){
    int m[6] = {100, 50, 25, 10, 5, 1};
    int t = 450;

    int *moe = (int*) malloc(sizeof(int)*200);

    moe = problema_troco_ag(m, 6, t);

    for(int i=0; i < 5; i++)
        printf("%d ", moe[i]);


    free(moe);

    return 0;
}

// deu pau, desisti