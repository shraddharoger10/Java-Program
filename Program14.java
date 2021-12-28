
//Write Java program which accept two arrays from user and display even contents of each array.
import java.util.Scanner;

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
        Scanner aobj = new Scanner(System.in);
        int i = 0;

        System.out.println("Enter the elements in Array1");
        for(i=0; i < Arr1.length; i++)
        {
            Arr1[i] = aobj.nextInt();
        }

        System.out.println("Enter the elements in Array2");
        for(i=0; i < Arr2.length; i++)
        {
            Arr2[i] = aobj.nextInt();
        }
    }

    public void DisplayEven()
    {
        int i = 0;

        System.out.println("The even elements in Array1 are");
        for(i=0; i < Arr1.length; i++)
        {
            if(Arr1[i] % 2 == 0)
            {
                System.out.println(Arr1[i]);
            }
        }

        System.out.println("The even elements in Array2 are");
        for(i=0; i < Arr2.length; i++)
        {
            if(Arr2[i] % 2 == 0)
            {
                System.out.println(Arr2[i]);
            }
        }
    }
}
class Program14
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
    mobj.DisplayEven();

    sobj.close();
    }
}
