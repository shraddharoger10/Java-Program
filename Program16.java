
// Write Java program which accept two arrays from user and form
//new array which is combination of contents of first and second array.


import java.util.*;

 class MyArray
{
    public int Arr1[];
    public int Arr2[];
    public int Brr[];

    public MyArray(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
        Brr = new int[iSize1+iSize2];
    }

    public void Accept()
    {
        Scanner obj = new Scanner(System.in);
        int i = 0;

        System.out.println("Enter the element in Array1");
        for(i=0; i < Arr1.length; i++)
        {
            Arr1[i] =  obj.nextInt();
        }

        System.out.println("Enter the element in Array2");
        for(i=0; i < Arr2.length; i++)
        {
            Arr2[i] =  obj.nextInt();
        }
    } 
    
    public int[] ArrayConcate()
    {
        int ipos = 0;

        for(int element : Arr1)
        {
            Brr[ipos] = element;
            ipos++;
        }

        for(int element : Arr2)
        {
            Brr[ipos] = element;
            ipos++;
        }

        return Brr;
    }
}
class Program16
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of Array1");
        int iSize1 = sobj.nextInt();

        System.out.println("Enter the size of Array2");
        int iSize2 = sobj.nextInt();

        MyArray mobj = new MyArray(iSize1, iSize2);

        mobj.Accept();

        int[] iRet = mobj.ArrayConcate();
        System.out.println("The new array is :"+Arrays.toString(iRet));
        
        sobj.close();
    }
}