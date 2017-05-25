#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int string_cmp(const char *a,const char *b) 
{ 
    const char *pa = *(const char**)a;
    const char *pb = *(const char**)b;

    return strcmp(pa,pb);
} 

int main(){
    int N; 
    scanf("%d",&N);
    char *output[N];
    
    int count = 0;
    for(int a0 = 0; a0 < N; a0++){
        char* firstName = (char *)malloc(10240 * sizeof(char));
        char* emailID = (char *)malloc(10240 * sizeof(char));
        scanf("%s %s",firstName,emailID);
        if (strstr(emailID, "@gmail.com")){
           // printf("%s\n",firstName);
            output[count] = (char *)malloc(21 * sizeof(char));
            strcpy(output[count],firstName);
            count++;
        }
        free(firstName);
        free(emailID);
    }

    qsort(output,count,  sizeof(char *), string_cmp);
    for(int i =0; i < count; i ++){
        printf("%s\n",output[i]);
    }
    return 0;
}
