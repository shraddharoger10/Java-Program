
import java.util.Scanner;

class Search
{
    public int arr[];

    public Search(int iSize)
    {
        arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Entered Number");
        int i =0;
        for(i=0; i < arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }
    }

    public int FirstSearch(int iNo)
    {
        int i = 0;
        for(i=0; i<arr.length; i++)
        {
            if(arr[i] == iNo)
            {
                break;
            }
        }

        if(i == arr.length)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
}
class Program11
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of element");
        int iSize = sobj.nextInt();

        Search obj = new Search(iSize);

        obj.Accept();
       
        System.out.println("Enter the Number to search");
        int iValue = sobj.nextInt();

        int iRet = obj.FirstSearch(iValue);
        if(iRet == -1)
        {
            System.out.println("There is no such number");
        }
        else
        {
            System.out.println("The Number at Index : "+iRet);
        }
        
        sobj.close();

    }
}