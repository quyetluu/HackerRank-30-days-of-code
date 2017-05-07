#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char input[10][10000],a,b;
    int T,i,j; 
    scanf("%d",&T);
    for(j=0;j<T;j++)
    {      
        scanf("%s",&input[j][0]);
        for(i=0;input[j][i]!= '\0';i++)
        {   
            if(i%2==0){
                printf("%c",input[j][i]);
            }
        }
        printf(" ");

        for(i=0; input[j][i]!= '\0';i++)
        {   
            if(i%2==1){
                printf("%c",input[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
