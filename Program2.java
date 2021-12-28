import java.util.*;

class SumDigit
{
    public int Digit(int iNo)
    {
        int iDigit = 0, iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }
    
     
}
class Program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter The Number");
        int iValue = sobj.nextInt();

        SumDigit obj = new SumDigit();

        int iret = obj.Digit(iValue);
        System.out.println("Addition of Digits are : "+iret);

        sobj.close();
    }
}
