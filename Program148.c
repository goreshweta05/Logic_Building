#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void Update(int Arr[],int iSize)
{
    int iCnt = 0; 
    
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
         Arr[iCnt]++;                           
    }
                     
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
 
   Update(iPtr,iLength);
   printf("Updated data from array is: %d\n");

   for(iCnt = 0;iCnt < iLength;iCnt ++)
   {
       printf("%d\n",iPtr[iCnt]);
   }
  
   //step 3: Free the memory

   free(iPtr);

    return 0;
}
