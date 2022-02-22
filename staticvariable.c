#include<stdio.h>

int func1(int b){
    
    static int myVar=8;
    printf("The value of myVar is %d\n", myVar);
    myVar++;
    return b+myVar;

}
int main(){
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr=&val;
    
    printf("The value    of fnction is %d\n", val);
    return 0;
    }