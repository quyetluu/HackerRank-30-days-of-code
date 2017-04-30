#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float mealCost;
    float totalCost;
    int tip;
    int tax;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%f",&mealCost);
    scanf("%d",&tip);
    scanf("%d",&tax);
    totalCost = mealCost + (1.0)*mealCost*((1.0*tip/100) + (1.0*tax/100));
    if(totalCost - (int)totalCost > (float)0.5)
        totalCost+=0.5;
    
    printf("The total meal cost is %d dollars.",(int)totalCost);
    
    return 0;
}