#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int count = 0;
    int size = sizeof(n) *8;// the size of int is 4; 4 * 8 equal 32 -> this is the amount of bit of int type.this is applied for genaral cases.
    int max = 0;
    for (int i = 0; i < size; i++){
 
        if( n & (1 << i)){
           count++;
           max = max > count ? max:count;
        } else {
            count = 0;
        }
           
    }
    printf("%d",max);
    return 0;
}
