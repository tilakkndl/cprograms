// #include<stdio.h>
// int main(){
//     struct book
//     {
//        char name[20];
//        int pages;
//        float price;
//     }b[50];
    
//     printf("En;ter the record of 50 books: ");
//     for (int i = 0; i < 4; i++)
//     {
//       scanf("%s%d%f", b[i].name, &b[i].price);
//     }
//     printf("Book Details are: ");
//     for (int i = 0; i < 4; i++)
//     {
//        printf("%s\t%d\t%d\t", b[i].name, b[i].pages, b[i].price);
//        printf("\n");
//     }
    
    
// }



// #include<stdio.h>
// #include<conio.h>
//    struct student
//    {
//       int age;
//       char name[40];
//    };
//    void display(struct student stu);
//    int main(){
//       struct student stu;
//       printf("'Enter the age of student: ");
//       scanf("%d", &stu.age);
//       printf("Enter the name of student: ");
//       scanf("%s", &stu.name);
//       display(stu);
//       getch();
//       return 0;
//    }
//    void display(struct student stu){
//       printf("The age of student is %d\n", stu.age);
//       printf("Name of student is %s", stu.name);
//    }
   



   // #include<stdio.h>
   // int main(){
   //    void display(struct student stu[5]);
   //    struct student
   //    {
   //      int age;
   //      char name[22];
   //    };
   //    struct student stu[5];
   //    printf("Enter the age: ");
   //    for (int i = 0; i < 3; i++)
   //    {
   //       scanf("%d", &stu[i].age);
   //    }
   //    printf("Enter the name : ");
   //    for (int i = 0; i < 3; i++)
   //    {
   //    scanf("%s", stu[i].name);
   //    }
   //    display(stu); 
   // }
   // void display(struct student stu1[5]){
   //    for (int i = 0; i < 3; i++)
   //    {
   //       printf("%d", stu1[i].age);
   //        printf("%s", stu1[i].name);
   //    }
   // }


// #include<stdio.h>
// int main(){
//    int a[]={1, 2,3,4};
//    printf("%u\t", a);
//    printf("%d\t", &a[1]);
//    printf("%d\t", &a[2]);
//    printf("%d", *(&a[0]));
// }

// #include<stdio.h>
// int main(){
//    int n;
//    float sum = 0, a = 2;
//    printf("Enter number: ");
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//       sum = sum + 1/a;
//       a = a+2;
//    }
//    printf("The sum is %f", sum);
// }





#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\n';i++)
    {
        if (s[i] == ' ' && s[i+1] == ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
}