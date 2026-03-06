import java.util.*;

class ArrayX
{
    public void Display(int Brr[])
    {
        int i = 0;
        System.out.println("elements of the array are: ");
        
        for(i = 0 ; i< Brr.length; i++)
        {
            System.out.println(Brr[i]);
        }
    }
    public int CountEven(int Brr[])
    {
        int i = 0, iCount = 0;

        for(i = 0; i < Brr.length ; i++)
        {
            if((Brr[i]% 2 )== 0)
            {
                iCount++;
            }
        }
        return iCount;
    }

    public int Summation(int Brr[])
    {
        int i = 0; iSum = 0;

        for(i = 0 ; i < Brr.length ; i++)
        {
            iSum = iSum + Brr[i];
        }
         return iSum;
    } 
   

}

class Program102
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
    
        int iSize = 0, i = 0 , iRet = 0;

        System.out.println("enter the number of elements you want..");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
        
        System.out.println("Enter the elements: ");
        
        for(i = 0; i < Arr.length ; i++)
        {
           Arr[i] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);

        iRet = aobj.Summation(Arr);
        System.out.println("Addition of elements are: "+iRet);

        //IMportant
        aobj = null;
        Arr = null;
        sobj = null;

        System.gc();

    }
}