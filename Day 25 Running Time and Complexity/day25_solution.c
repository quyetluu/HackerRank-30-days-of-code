#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int isPrime(int n) { 
    int i;
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for(i = 3; i*i<=n; i+=2) {
        if(n%i == 0) return 0;
    }
    return 1;
}

int main(){
    int p; 
    scanf("%d",&p);
    for(int a0 = 0; a0 < p; a0++){
        int n; 
        scanf("%d",&n);
        if (isPrime(n))
            printf("Prime\n");
        else
            printf("Not prime\n");
    }
    return 0;
}
