#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char name[64];
    unsigned int number;
} PHONEBOOK;

void lookup(void *phonebook,  const char input[64],int n){
    PHONEBOOK *phoneBook = (PHONEBOOK *)phonebook;
    for (int j = 0; j < n ; j++){
        if (strcmp(input,phoneBook[j].name) == 0){
            printf("%s=%d\n",phoneBook[j].name, phoneBook[j].number);
			return;
        }
    }
    printf("Not found\n");
    return;
    
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    char tmp[64];
    PHONEBOOK *phoneBook;
    scanf("%d",&n);
    phoneBook = (PHONEBOOK *) malloc(sizeof(PHONEBOOK) * n);
    for (int i = 0; i < n; i++){
        scanf("%s%d",&phoneBook[i].name, &phoneBook[i].number);
    }
    for (int i = 0; i < n; i++){
        scanf("%s",&tmp);
        unsigned int rtn = -1;
        lookup(phoneBook, &tmp,n);
    }
    return 0;
}
