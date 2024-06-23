#include <stdio.h>
#include <stdlib.h>

int problema_mohcila_fb(int c[], int p[], int n, int b, int i, int max){
    int c1, c2;
    if (i >= n)
        return b < 0 ? 0 : max;

    else{
        c1 = problema_mohcila_fb(c, p, n, b, i+1, max);
        c2 = problema_mohcila_fb(c, p, n, b- p[i], i + 1, max + c[i]);
        return c1 > c2 ? c1 : c2;
    }
}

int main(){

    int c[3] = {60, 100, 120};
    int p[3] = {10, 20, 30};

    printf("%d", problema_mohcila_fb(c, p, 3, 50, 0, 0));

    return 0;
}