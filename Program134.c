#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int main()
{
    int iLength = 0,iCnt = 0;
    IPTR iPtr = NULL;

    printf("Enter number of Elements: ");
    scanf("%d",&iLength);                   

    //step 1: Allocate the memory

   iPtr =  (IPTR)malloc(iLength * sizeof (int));
   if(NULL == iPtr)                                         
   {
     printf("Unable to allocate memory\n ");
     return -1;
   }

   printf("Enter the elements: \n");

   for(iCnt = 0;iCnt < iLength;iCnt ++)
   {
       scanf("%d",&iPtr[iCnt]);
   }
 //step 2: use the memory
 //call to the function which contains business logic

   //Fun(iPtr,iLength);

   //step 3: Free the memory

   free(iPtr);

    return 0;
}