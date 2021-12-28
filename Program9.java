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
        Scanner sobj =  new Scanner(System.in);
        System.out.println("Entered the element");
        int i = 0;

        for(i=0; i < arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }
    }

    public int LastSearch(int iNo)
    {
        int i=0;
        for(i=arr.length-1; i >=0; i--)
        {
            if(arr[i] == iNo)
            {
                break;
            }
        }
        if(i == -1)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
}
class Program9
{
    public static void main(String arg[])
    {
        int iValue = 0, iSize = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number of element");
        iSize = sobj.nextInt();
        
        Search obj = new Search(iSize);

        obj.Accept();

        System.out.println("Enter the number to search");
        iValue = sobj.nextInt();

        iRet = obj.LastSearch(iValue);
        if(iRet == -1)
        {
            System.out.println("There is no such number");
        }
        else
        {
            System.out.println("The number at Index : "+iRet);
        }

         sobj.close();
    }
}
