#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100000
#define MAX_VAL 1000000001

int list[MAX];

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main() {
    
    int N,K;
    int i;
    
    scanf("%d %d",&N,&K);
    for(i = 0;i < N;i++)
        scanf("%d", &list[i]);
    qsort(list, N, sizeof(int), cmpfunc);
    int unfairness = list[K-1] - list[0];
    for (int i = 1; i <= N - K; i ++){
        if ((list[K - 1 + i] - list[i]) <= unfairness )
            unfairness = list[K- 1 + i] - list[i];
    }
    printf("%d",unfairness);
    return 0;
}
