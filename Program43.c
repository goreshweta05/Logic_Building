//Input : 12 2   output: true
//Input : 12 3   output: true
//Input : 12 5   output: false
//Input : 12 6   output: true

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1,int iNo2)
{
    if((iNo1 % iNo2) == 0 )
    {
        return true;
    }
     else
    {
    return false;
  }
}
int main()
{ 
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("enter first number: \n");
    scanf("%d",&iValue1);

     printf("enter Second  number: \n");
    scanf("%d",&iValue2);

     bRet = CheckDivisible(iValue1,iValue2);

    if(bRet == true)
    {
        printf("It is completely divisible..\n");
    }
    else
    {
        printf("It is  not completely divisible..\n");  
    }
     return 0;
}