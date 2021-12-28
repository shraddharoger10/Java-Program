
//Write Java program which accept two arrays from user and display contents of each array.


import java.util.*;

class MyArray
{
    public int Arr1[];
    public int Arr2[];

    public MyArray(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
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

    public void Display()
    {
        int i = 0;

        System.out.println("The elements of Array1 are :");
        for(i=0; i < Arr1.length; i++)
        {
           System.out.println(Arr1[i]);
        }

        System.out.println("The elements of Array2 are :");
        for(i=0; i < Arr2.length; i++)
        {
            System.out.println(Arr2[i]);
        }
    }
}
class Program13
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
        mobj.Display();

        sobj.close();
    }
}