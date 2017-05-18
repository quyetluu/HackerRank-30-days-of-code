#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(int *a, int *b){
    int *c;
    *c = *a;
    *a = *b;
    *b = *c;   
}
int main() {
    int n; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    // Write Your Code Here
    int numberOfSwaps = 0;
    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
        for (int j = 0; j < n - i - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                numberOfSwaps++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",numberOfSwaps);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d",a[n-1]);
    return 0;
}
