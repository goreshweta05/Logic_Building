#include<stdio.h>

int strlenx(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
         iCount++;
           str++;
    }
    return iCount;
}
int main()
{
   int  iRet = 0;

    char Arr[50] = {'\0'};
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet =  strlenx(Arr);
     printf("String length is : %d\n",iRet);

    return 0;
}