#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0,iMin  = 0; 
    
     for(iMin = Arr[iCnt],iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];                           
        }
    }
       return iMin;                  
}
       
int main()
{
    int iLength = 0,iCnt = 0 ,iRet = 0;
    
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

   printf("Enter the values: \n");

   for(iCnt = 0;iCnt < iLength;iCnt ++)
   {
       scanf("%d",&iPtr[iCnt]);
   }
  

 //step 2: use the memory
 
   iRet = Minimum(iPtr,iLength);
   printf("Minimum number is: %d\n",iRet);
  
   //step 3: Free the memory

   free(iPtr);

    return 0;
}
