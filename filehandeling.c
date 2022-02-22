
// to read file.

#include<stdio.h>
int main(){
    FILE *ptr = NULL;
    char string[22];
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content is %s", string);
}


// writing a file.


// #include<stdio.h>
// int main(){
//     FILE *ptr = NULL;
//     char string[82] ="hahahhahahhah guys we are going to enjoy leg piece today.";
//     ptr = fopen("myfile.txt", "w");
//     fprintf(ptr, "%s", string);
//     printf("The content is %s", string);
// }

