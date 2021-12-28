
import java.util.*;

class Number
{
	public int LastOccurance(int Arr[], int iNo)
	{
		int iCnt = 0;
		
		for(iCnt=Arr.length-1; iCnt >= 0 ; iCnt-- )
		{
			if(Arr[iCnt] == iNo)
			{
				break;
			}
		}
		
		if(iCnt == -iCnt)
		{
			return -1;
		}
		else
		{
			return iCnt;
		}
	}
}
class Program10
{
	public static void main(String arg[])
	{
		int iSize=0, i=0,iValue = 0;
		int arr[];
		int iRet = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number of element");
		iSize = sobj.nextInt();
		
		arr = new int[iSize];
		
		System.out.println("Enter the element");
		for(i=0; i < arr.length; i++ )
		{
			arr[i] = sobj.nextInt();
		}
		
		System.out.println("Enter the number");
		iValue = sobj.nextInt();
		
		Number nobj = new Number();
		iRet = nobj.LastOccurance(arr,iValue);
		
		
		System.out.println("LastOccurance Number is at index : "+iRet);
		
	}
}
