//  Write a program to display the following data in proper manner using structure.
// Name 		Total Marks		Grade
// Ram			100		         C
// Sita			120		         B
// Gita			130		         B
// Gopal        150		         A

// #include <stdio.h>
// int main()
// {
//     struct student
//     {
//         char name[22];
//         int marks;
//         char grade;
//     };
//     struct student std1 = {"Ram", 100, 'C'};
//     struct student std2 = {"Sita", 120, 'B'};
//     struct student std3 = {"Gita", 130, 'B'};
//     struct student std4 = {"Gopal", 150, 'A'};
//     printf("Name is %s, Marks is %d & Grade is %c\n", std1.name, std1.marks, std1.grade);
//     printf("NAMe is %s, Marks is %d & Grade is %c\n", std2.name, std2.marks, std2.grade);
//     printf("NAMe is %s, Marks is %d & Grade is %c\n", std3.name, std3.marks, std3.grade);
//     printf("NAMe is %s, Marks is %d & Grade is %c\n", std4.name, std4.marks, std4.grade);
// }

// Create a structure named student that has name, roll, marks and remarks as members. Assume appropriate types and size of member. Write a program using structure to read and display the data entered by the user.

// #include<stdio.h>
// int main(){
//     struct student
//     {
//         char name[21];
//         int rollNO;
//         int marks;
//         char remark[22];
//     }std;
//     printf("Enter the name of student: \n");
//     scanf("%[^\n]", std.name);
//     printf("Enter your roll No:");
//     scanf("%d", &std.rollNO);
//     printf("Enter your marks: ");
//     scanf("%d", &std.marks);
//     printf("Enter the remarks: \n");
//    scanf("%s", std.remark);
//     printf("Name: %s\n Marks: %d\n Roll no: %d\n Remarks %s", std.name, std.marks, std.rollNO, std.remark);
// }

// Write a program to read the name, rollno and mark of 5 students using array of structure. Display the name and rollno of those students whose mark is greater than 50.
// #include<stdio.h>
// int main(){
//     struct student
//     {
//        char  name[22];
//        int rollNo;
//        int marks;
//     }std[5];
//     printf("Enter the details of 5 students: ");
//     for (int i = 0; i < 5; i++)
//     {
//       scanf("%s%d%d", std[i].name, &std[i].rollNo, &std[i].marks);
//     }
//     printf("The details of students are: ");
//     for (int i = 0; i < 5; i++)
//     {
//        printf("name = %s\n Roll number = %d\n Marks = %d\n", std[i].name, std[i].rollNo, std[i].marks);
//     }
// }

// Write a program to read the name, rollno and mark of 5 students using array of structure. Display the name and rollno of those students whose mark is greater than 50

// #include<stdio.h>
// int main(){
//     struct student
//     {
//         char name[21];
//         int rollNO;
//         int marks;
//     }std[66];
//     for (int i = 0; i < 5; i++)
//     {
//            printf("Enter the name of student: \n");
//     scanf("%s", std[i].name);
//     printf("Enter your roll No:");
//     scanf("%d", &std[i].rollNO);
//     printf("Enter your marks: ");
//     scanf("%d", &std[i].marks);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (std[i].marks >= 50)
//     {
//          printf("Name: %s\n Marks: %d\n Roll no: %d\n", std[i].name, std[i].marks, std[i].rollNO);
//     }
//     }
// }

// Write a program to read the name, address and salary of 5 employee using array of structure. Display information of each employee in ascending order of their name.
// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     struct employee
//     {
//         char name[22];
//         char address[33];
//         int salary;
//         char tempName[33];
//         char tempAddress[22];
//         int tempSalary;
//     } emp[5];
//     printf("Enter the details of five employee : \n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%s%s%d\n", emp[i].name, emp[i].address, &emp[i].salary);
//     }
//     printf("After arranging in alphabetical order");
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (strcmp(emp[i].name, emp[j].name) < 0)
//             {
//                 strcpy(emp[i].tempName, emp[i].name);
//                 strcpy(emp[i].name, emp[j].name);
//                 strcpy(emp[j].name, emp[i].tempName);

//                 strcpy(emp[i].tempAddress, emp[i].address);
//                 strcpy(emp[i].address, emp[j].address);
//                 strcpy(emp[j].address, emp[i].tempAddress);

//                 emp[i].tempSalary = emp[i].salary;
//                 emp[i].salary = emp[j].salary;
//                 emp[j].salary = emp[i].tempSalary;
//             }
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%s\t", emp[i].name);
//         printf("%s\t", emp[i].address);
//         printf("%d", emp[i].salary);
//         printf("\n");
//     }
// }

// Write a program that reads different names and address into the computer and sorts the names into alphabetical order using structure variables.
// #include <stdio.h>
// #include <string.h>
// int main()
// {

//     struct student
//     {
//         char name[100];
//         char temp[33];
//     } std[5];
//     printf("Enter five names: ");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%s", std[i].name);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Name = %s\n", std[i].name);
//     }
//     printf("Names of student in alphabetical order: \n");
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//         if (strcmp(std[i].name, std[j].name)<0)
//         {
//             strcpy(std[i].temp, std[i].name);
//             strcpy(std[i].name, std[j].name);
//             strcpy(std[j].name, std[i].temp);
//         }

//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%s\n", std[i].name);
//     }
// }

// create a structure named book which has members name, pages and price. write a program to read name of book , its pages  and price as member variables. Read name of book, its page number and price. Finally display these members value. Use pointer to structure instead of structure itself to access member variable
// #include<stdio.h>
// int main(){
//     struct book
//     {
//        char name[33];
//        int pages;
//        int price;
//     }bookDetails, *ptr;

//     printf("Enter The name: ");
//     scanf("%s", bookDetails.name);
//     printf("Enter number of pages: ");
//     scanf("%d", &bookDetails.pages);
//     printf("Enter prices of book: ");
//     scanf("%d", &bookDetails.price);
//     ptr = &bookDetails;
//     printf("Accessing the element using pointer:\n");
//     printf("Name: %s\n", ptr->name);
//     printf("Pages: %d\n", ptr->pages);
//     printf("Price: %d\n", ptr->price);
// }

//create a structure named book which has name, pages and price. Write a program to read name, no of pages and price as member variables. Write a program to read name , no of pages and price of 5 books using array of structure. Display the names, no of pages and price of most expensive book.
// #include<stdio.h>
// int main(){
//     struct book
//     {
//        char name[22];
//        int page;
//        int price;
//     }bk[5];
//     printf("Enter the details of five book\n");
//     for (int i = 0; i < 5; i++)
//     {
//        scanf("%s", bk[i].name);
//        scanf("%d%d", &bk[i].page, &bk[i].price);
//     }
// if (bk[0].price>bk[1].price && bk[0].price>bk[2].price && bk[0].price>bk[3].price && bk[0].price>bk[4].price)
// {
//     printf("Name = %s\n Price = %d\n Page = %d\n", bk[0].name, bk[0].price, bk[0].page);
// }
// if (bk[1].price>bk[0].price && bk[1].price>bk[2].price && bk[3].price>bk[3].price && bk[4].price>bk[4].price)
// {
//     printf("Name = %s\n Price = %d\n Page = %d\n", bk[1].name, bk[1].price, bk[1].page);
// }
// if (bk[2].price>bk[0].price && bk[2].price>bk[1].price && bk[2].price>bk[3].price && bk[2].price>bk[4].price)
// {
//     printf("Name = %s\n Price = %d\n Page = %d\n", bk[2].name, bk[2].price, bk[2].page);
// }
// if (bk[3].price>bk[1].price && bk[3].price>bk[2].price && bk[3].price>bk[0].price && bk[3].price>bk[4].price)
// {
//     printf("Name = %s\n Price = %d\n Page = %d\n", bk[3].name, bk[3].price, bk[3].page);
// }
// else{
//      printf("Name = %s\n Price = %d\n Page = %d\n", bk[4].name, bk[4].price, bk[4].page);
// }
// }

//create a union name student that has roll and marks as member. Assign some value to those members one at a time and display the result once at a time.
//  #include<stdio.h>
//  int main(){
//      union student
//      {
//        int rollNo;
//        int marks;
//      };
//      union student std;
//      printf("Enter the roll no of student: ");
//      scanf("%d", &std.rollNo);
//      printf("The roll number of student is %d\n", std.rollNo);
//      printf("Enter the marks of student: ");
//      scanf("%d", &std.marks);
//      printf("The marks of student is %d", std.marks);
//  }

// write a program to define a strucrure Date and declare its variable called Date1 and initalize it to february 25,1957, in correct form
// #include<stdio.h>
// #include<string.h>
// int main(){
//     struct Date
//     {
//        struct Date1
//        {
//           char month[11];
//           int day;
//           int year;
//        }d1;
//     }d;
//     strcpy(d.d1.month, "February");
//     d.d1.day = 25;
//     d.d1.year = 1957;
//     printf("The date is %dth %s, %d", d.d1.day, d.d1.month, d.d1.year);
// }

// define a structure called date with three elements day, month, and year. Write a program to enter the date and print it.
// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     struct date
//     {
//         char month[11];
//         int day;
//         int year;
//     } d;
//     strcpy(d.month, "February");
//     d.day = 25;
//     d.year = 1957;
//     printf("The date is %dth %s, %d", d.day, d.month, d.year);
// }

//Declare a structure template that holds student access information into the student registration system. It should hold the 8 student character student username, the student 9 character ID number , and the student 5 digit pin number. Write a program that ask the student information and display them to user
// #include<stdio.h>
// int main(){
//     struct studentInformation
//     {
//        char userName[8];
//        int IdNumber;
//        int pinNumber;
//     }std;
//     printf("Enter your name: ");
//     scanf("%s", std.userName);
//     printf("Enter your pin number:");
//     scanf("%d", &std.pinNumber);
//     printf("Enter your 9th grade ID: ");
//     scanf("%d", &std.IdNumber);
//     printf("Name = %s\n Pin number = %d\n 9th grade Id = %d\n", std.userName, std.pinNumber, std.IdNumber);
// }

//Define a stucture called date with three elements day, month and year. Write a program to enter two date and find out difference
// #include<stdio.h>
// int main(){
//     struct Date
//     {
//        int day;
//        int month;
//        int year;
//     }date1, date2, date3;
//     printf("Enter day, month and year: \n");
//     scanf("%d%d%d", &date1.day, &date1.month, &date1.year);
//     printf("Enter another day, month and year: \n");
//     scanf("%d%d%d", &date2.day, &date2.month, &date2.year);
//     if (date1.day<date2.day)
//     {
//        date1.month--;
//        date1.day+=30;
//        date3.day = date1.day-date2.day;
//     }
//     else{
//         date3.day = date1.day-date2.day;
//     }
//     //for month
//         if (date1.month<date2.month)
//     {
//        date1.year--;
//        date1.month+=12;
//        date3.month = date1.month-date2.month;
//     }
//     else{
//         date3.month = date1.month-date2.month;
//     }

//     // for year
//     date3.year = date1.year-date2.year;

//     printf("The required differene is %d\t%d\t%d", date3.day, date3.month, date3.year);
//     }

//Design a air line data structure that store the following
// a) flight number
// b) Originating airport code
// c) Destination airport code
// d) Starting time
// e) arriving time
// print the information

// #include<stdio.h>
// int main(){
//    struct airLineData
//    {
//       int flightNumber;
//       int destinationCode;
//       int originationgCode;
//       struct StartingTime
//       {
//          int second;
//          int minute;
//          int hour;
//       }start;
//       struct arrivingTime
//       {
//          int second;
//          int minute;
//          int hour;
//       }end;

//    }fgt;
//    printf("Enter fligh code: ");
//    scanf("%d", &fgt.flightNumber);
//    printf("Enter destination code: ");
//    scanf("%d", &fgt.destinationCode);
//         printf("Enter origination code: ");
//    scanf("%d", &fgt.originationgCode);
//    printf("Enter staring time in sec, min hour: ");
//    scanf("%d%d%d", &fgt.start.second, &fgt.start.minute, &fgt.start.hour);
//     printf("Enter arriving time in sec, min hour: ");
//    scanf("%d%d%d", &fgt.end.second, &fgt.end.minute, &fgt.end.hour);
//    printf("The flight code is %d\n", fgt.flightNumber);
//    printf("The destination code is %d\n", fgt.destinationCode);
//    printf("The originating code is %d", fgt.originationgCode);
//    printf("The starting time is %d:\t%d:\t%d\n", fgt.start.second, fgt.start.minute, fgt.start.hour);
//    printf("The arriving time is %d:\t%d:\t%d\n", fgt.end.second, fgt.end.minute, fgt.end.hour);
// }

//define a sturcture Employee and its variable person1 and initialize it to "Hari", with salary of $50,000, who was hired on March 10, 2001 (use structure with in sturcture).
// #include <stdio.h>
// int main()
// {
//     struct Date
//      {
//           int day;
//           char month[22];
//            int year;
//     };
//     struct Employee
//     {
//         char person1[11];
//         int salary;
//         struct Date hd;
//     };
//     struct Employee emp = {"Hari", 50000, {10, "March", 2001}};
//     printf("The name is %s\n", emp.person1);
//     printf("The salary is $%d\n", emp.salary);
//     printf("The hiring date is %d\t%s,\t%d", emp.hd.day, emp.hd.month, emp.hd.year);
// }
