////////////////////////////////////////////////////////////////
//
// Required Header File
//
////////////////////////////////////////////////////////////////

#include<stdio.h>                // for Input Output
#include<stdbool.h>              // For Bool datatype

////////////////////////////////////////////////////////////////
// 
//  Function Name:  CheckEvenOdd
//  Description  :
//  Input        :
//  Output       :
//  Author       :  Shweta Gore
//  Date         :  10/10/2025
//
////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
      int iRem = 0;

      iRem = iNo % 2;

      if(iRem == 0)
      {    return true;     }
      else
      {    return false;    }
}

////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    printf("Result is: %d\n",bRet);

    if(bRet == true)
    {       printf("%d is Even number \n",iValue);    }
    else
    {       printf("%d is odd number \n",iValue);     }

    return 0;
}