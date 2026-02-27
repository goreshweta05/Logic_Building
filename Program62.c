#include<stdio.h>
int main()
{
    int iNo = 7236;
    int iDigit = 0;

    printf("________________________________\n");
    printf("Original value of iNo is : %d\n",iNo);

    printf("_________________________________\n");
    iDigit = iNo % 10;
    printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is: %d\n",iNo);
    
    printf("__________________________________\n");
    iDigit = iNo % 10;
     printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is: %d\n",iNo);
    
    printf("___________________________________\n");
     iDigit = iNo % 10;
     printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is: %d\n",iNo);
    
    printf("_____________________________________\n");
     iDigit = iNo % 10;
     printf("iDigit is :%d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is: %d\n",iNo);
    
    printf("_______________________________________\n");
     return 0;
}