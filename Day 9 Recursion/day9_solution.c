#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned int factorial(int n){
    if(1 == n)
        return 1;
    return n*factorial(n-1);
} 

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned int n, sum;
    scanf("%d",&n);
    sum = factorial(n);
    printf("%d",sum);
    return 0;
}
