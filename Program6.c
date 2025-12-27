#include<stdio.h>

int Add(int a,int b)
{
   int Sum = 0;
   Sum = a + b; //Business logic 
   return Sum;
}

int main()
{
    int i = 0 , j = 0, ans = 0;

    printf("Enter first number: \n");
    scanf("%d",&i);

    printf("Enter second number: \n");
    scanf("%d",&j);
    
     ans = Add(i,j);
    printf("Addition is: %d\n",ans);

    return 0;
}