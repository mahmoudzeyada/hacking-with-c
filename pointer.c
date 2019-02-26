#include <stdio.h>
#include <string.h>


int main(){
    char str_a[20];
    char *pointer;
    char *pointer2;

    strcpy(str_a,"Helloworld\n");
    pointer=str_a;
    
    printf(pointer);

    pointer2=pointer+2;
    printf(pointer2);
    strcpy(pointer2,"hey again\n");
    printf(pointer);
}