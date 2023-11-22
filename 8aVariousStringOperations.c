#include<stdio.h>
#include<string.h>
void main()
{
    char str[20],str1[20],str2[50];
    int length,length1,res;
    printf("Enter The 1st String:\n");
    gets(str);
    printf("Enter The 2nd String:\n");
    gets(str1);
    length=strlen(str);
    length1=strlen(str1);
    printf("Length of the 1st string is %d\nLength of the 2nd string is %d", length,length1);
    printf("\nThe concotenation of 2 strings is %s",strcat(str,str1));
    res=strcmp(str,str1);
    printf("\nComparision of string result is: %d,",res);
    strcpy(str2,str1);
    printf("\nThe copy of the 2nd string (3rd string) is %s",str2);
    printf("\nUppercase of the 3rd string is: %s",strupr(str2));
    printf("\nlower case of 3rd string is: %s",strlwr(str2));
    printf("\nOn reversing the 3rd string we get: %s",strrev(str2));
}