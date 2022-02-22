#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * replaceWord(const char * str, const char * oldWord, const char * newWord)
{
    char *resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // lets count the number of times old occurs in the string
    for (int i = 0; str[i]!='\0'; i++)
    {
        if(strstr(&str[i], oldWord) == &str[i]){

        
      count++;


    //   jump over this oldWord
    i = i + oldWordLength-1;

    }
    }

    // making a new string to fit in the replaced words

       resultString = (char *)malloc(i+count * (newWordLength-oldWordLength) + 1);
       i = 0;
       while(*str){
           //compare the substring with result
           if(strstr(str, oldWord) == str){
               strcpy(&resultString[i], newWord);
               i += oldWordLength;
               str += oldWordLength;
           }
           else{
               resultString[i] = *s;
               i += 1;
               s +=1;
           }
       }
}

int main(){
    FILE * ptr = NULL;
     FILE * ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
       ptr2 = fopen("bill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was %s\n", str);
    //call replaceWord function and generate newStr
    char * newStr = str;
    printf("The actual bill generated is %s\n", newStr);

    fprintf("ptr2", "%s", newStr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}