#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char name[11];
    unsigned long number;
} PHONEBOOK;



void lookup(void *phonebook,  const char input[64],int size){
    PHONEBOOK *phoneBook = (PHONEBOOK *)phonebook;
    int bottom= 0;
    int mid;
    int top = size - 1;

    while(bottom <= top){
        mid = (bottom + top)/2;
        if (strcmp(phoneBook[mid].name, input) == 0){
            printf("%s=%ld\n",phoneBook[mid].name, phoneBook[mid].number);
            return;
        } else if (strcmp(phoneBook[mid].name, input) > 0){
            top    = mid - 1;
        } else if (strcmp(phoneBook[mid].name, input) < 0){
            bottom = mid + 1;
        }
    }
    printf("Not found\n");
}
 
/* qsort struct comparision function */ 
int struct_cmp(const void *a, const void *b) 
{ 
    PHONEBOOK *ia = (PHONEBOOK *)a;
    PHONEBOOK *ib = ( PHONEBOOK *)b;
    return strcmp(ia->name,ib->name);
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    char *tmp;
    PHONEBOOK *phoneBook;
    scanf("%d",&n);
    phoneBook = (PHONEBOOK *) malloc(sizeof(PHONEBOOK) * n);
    for (int i = 0; i < n; i++){
        scanf("%s%ld",&phoneBook[i].name, &phoneBook[i].number);
    }
    qsort(phoneBook, n, sizeof(PHONEBOOK), struct_cmp);
    
    for (int i = 0; i < n; i++){
        tmp = (char*)malloc(sizeof(char) * 11);
        scanf("%s",tmp);
        if(tmp[0] != '\0')
            lookup(phoneBook, tmp,n);
        free(tmp);
    }
    return 0;
}
