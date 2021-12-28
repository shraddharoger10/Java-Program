import java.util.*;

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
        System.out.println("Entered numbers");
        int i = 0;
        for(i=0; i < arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }
    }

    public int EvenCnt()
    {
        int i = 0, iCnt=0;
        for(i=0; i< arr.length; i++)
        {
               if(arr[i] % 2 == 0)
                 {
                    iCnt++;
                 }
        }
        return iCnt;
    }
}
class Program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;

        System.out.println("Enter the number of element");
        iSize = sobj.nextInt();

        Search obj = new Search(iSize);

        obj.Accept();

        int iRet = obj.EvenCnt();

        System.out.println("Number of even elements are : "+iRet);

        sobj.close();
    }
}