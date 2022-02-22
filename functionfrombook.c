// #include<stdio.h>
// char lower_to_upper(char c1)
// {
//     char c2;
//     c2 = (c1>='a'&& c2<='z') ? ('A'+ c1 - 'a') : c1;
//     return(c2);
// }
// main()
// {
//     char lower, upper;
//     printf("Enter a lowercase char: ");
//     scanf("%c", &lower);
//     upper = lower_to_upper(lower);
//     printf("The upper case is %c", upper);
// }




// Write a program in C to convert a binary number into a decimal number without using array

// #include<stdio.h>
// int main(){
//     int n, decimal = 0, i = 1, p = 1;
//     printf("n = ");
//     scanf("%d", &n);
//     for (; n>0; )
//     {
     
//       if(i == 1){
//          p = p*1;
//      }
//      else{
//          p = p*2;
//      }

//      decimal = decimal+ ((n%10)*p);
//      i++;
//       n/=10;
//     }
//     printf("%d", decimal);
    
// }


// #include<stdio.h>
// int main(){
//     int n1, n2, j, hcf;
//     printf("numbers: ");
//     scanf("%d%d", &n1, &n2);
//     j = (n1<n2)?n1:n2;
//     for (int i = 1; i <= j; i++)
//     {
//        if (n1%i==0&&n2%i==0)
//        {
//          hcf = i;
//        }
       
//     }
//     printf("%d", hcf);
//     }




//  Write a program in C to find LCM of any two numbers



// #include<stdio.h>
// int main(){
//     int n1, n2, hcf, lcm, j;
//     printf("Numbers: ");
//     scanf("%d%d", &n1, &n2);
//     j = (n1<n2)?n1:n2;
//     for (int i = 1; i <= j; i++)
//     {
//        if ((n1%i==0)&&(n2%i==0))
//        {
//          hcf = i;
//        }
       
//     }
//     lcm = n1/hcf*n2;
//     printf("hcf is %d\nLcm is %d", hcf, lcm);
    
// }




// Write a C program to check whether a number is a Strong Number or not.

// #include<stdio.h>
// int main(){
//     int n, digit, checkDigits= 0, factorialOfDigits, original;
//     printf("Enter the nummmmber; ");
//     scanf("%d", &n);
//     original = n;
//     for (; n > 0; )
//     {
//        digit = n%10; 
//         factorialOfDigits = 1;
//        for (int j = digit; j > 1; j--)
     
//        {
//           factorialOfDigits = factorialOfDigits*j;
//        }
//        checkDigits = checkDigits + factorialOfDigits;
//        n=n/10;
//     }
//     if (checkDigits == original)
//     {
//         printf("Strong Number");
//     }
//     else{
//         printf("Not Strong nunnnnber;");
//     }
    
// }



