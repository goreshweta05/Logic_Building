#include<stdio.h>

int Vowels(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e' )|| (*str == 'i') || (*str == 'o')|| (*str == 'u'))
        {
            iCount++;
        }
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
    
    iRet = Vowels(Arr);
     printf("Number of vowels is : %d\n",iRet);

    return 0;
}