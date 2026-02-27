#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    printf("________________________________\n");
    printf("Original value of iNo is : %d\n",iNo);

    while(iNo != 0)
   {
        printf("_________________________________\n");
        iDigit = iNo % 10;
        printf("iDigit is :%d\n",iDigit);
        iNo = iNo / 10;
        printf("iNo is: %d\n",iNo);
        
    }  
    printf("_______________________________________\n");
}
int main()
{
    int iValue = 0;
     printf("Enter a number: \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    return 0;
}