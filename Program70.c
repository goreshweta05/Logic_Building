#include<stdio.h>

int SumDigits(int iNo)
{   
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
   {    
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit; 
    } 
    return iSum; 
}
int main()
{
    int iValue = 0, iRet = 0;

     printf("Enter a number: \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Sum of Digits is: %d\n",iRet);

     return 0;
}