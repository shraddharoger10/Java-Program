import java.util.*;

class Add 
{
    public int Sum(int iNo1, int iN02)
    {
        int iAns = 0;

        iAns = iNo1 + iN02;
        return iAns;
    }

}
class Program3
{
    public static void main(String arg[])
    {
        int iValue1 = 0, iValue2 = 0,iRet = 0;
        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter the first number :  ");
        iValue1 = sobj.nextInt();

        System.out.print("Enter the second number : ");
        iValue2 = sobj.nextInt();

        Add aobj = new Add();

        iRet = aobj.Sum(iValue1,iValue2);
        System.out.println("Addition is :"+iRet); 
        
        sobj.close();

    }
}