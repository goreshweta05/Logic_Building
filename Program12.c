/*
   START
    Accept number and store as no
    Divide no by 2
    If the remainder is 0 then 
     dispaly as Even
     otherwise
    Display as odd
    STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
      int iRem = 0;

      iRem = iNo % 2;

      if(iRem == 0)
      {
        printf("It is even number..");
      }
      else
      {
        printf("It is odd number..");
      }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}