#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    char string[44];
    ptr = fopen("mytext.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of this file %s\n", string);
    
}