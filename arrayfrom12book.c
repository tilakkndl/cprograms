// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[23];
//     gets(name);
   
//     printf("%d", strlen(name));
//      printf("%s", strlwr(name));
//       printf("%s", strupr(name));
//        printf("%s", strrev(name));
// }


#include<stdio.h>
int main(){
    int num = 0;
    char name[22];
    printf("Enter the word: ");
    gets(name);
    for (int i = 0; name[i]!='\0'; i++)
    {
       num++;
    }
    for (int i = num; i >= 0; i--)
    {
        printf("%c", &name[i]);
    }  
}
