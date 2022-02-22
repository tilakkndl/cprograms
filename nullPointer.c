#include<stdio.h>
int main2(){
    int a = 3;
    // int *ptr = &a;
    // int *ptr = NULL;
    int *ptr;
    printf("The adress of a is %d\n", &a);

    if(ptr != NULL){
        printf("The address of a is %d", ptr);
    }
    else{
        printf("The pointer is Null and it can't be deferenced.");
    }

}


