#include<stdio.h>
#include<conio.h>
 struct student
    {
        char name[29];
        int roll;
    }std1 = {"Tilak", 1};

int main(){
   struct student std2;
   printf("The name of the  first student is %s", std1.name);
      printf("The roll no of the  first student is %s", std1.roll);
      printf("Enter the name of second std: ");
      scanf("%s", &std2.name);
          printf("Enter the roll no of second std: ");
      scanf("%s", &std2.roll);
      printf("The name of second std is %s", std2.name);
         printf("The roll no  of second std is %s", std2.roll);
         getch();
         return 0;
}

// #include <stdio.h>
// int main()
// {
//     struct student
//     {
//         char name[8];
//         int class;
//         int roll;
//     } s[2];
//     for (int i = 0; i < 2; i++)
//     {
//         printf("Enter the students details:");
//         scanf("%s%d%d", s[i].name, &s[i].class, &s[i].roll);
//     }
//     printf("Students details are: \n");
//     for (int i = 0; i < 2; i++)
//     {

//         printf("%s%d%d", s[i].name, s[i].class, s[i].roll);
//     }
// }


#include<stdio.h>
struct student
{
   int age;
   char name[20];
};
void display()
