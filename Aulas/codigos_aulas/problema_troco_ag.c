#include <stdio.h>
#include <stdlib.h>

int qtd_moedas(int moedas[], int n, int troco){
    int i, n_moedas = 0;
    for(i = 0; i < n && troco > 0; i++){
        n_moedas += troco / moedas[i];
        troco = troco % moedas[i];
    }
    if (troco > 0)
        return -1;
    else
        return n_moedas;
}


int main(){
    int m[6] = {100, 50, 25, 10, 5, 1};
    int t = 450;

    printf("%d", qtd_moedas(m, 6, t));


    return 0;
}