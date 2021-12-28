
import java.util.*;

class Number
{
	public int FirstOccurance(int Arr[], int iNo)
	{
		int iCnt = 0;
		
		for(iCnt=0; iCnt < Arr.length; iCnt++ )
		{
			if(Arr[iCnt] == iNo)
			{
				break;
			}
		}
		
		if(iCnt == Arr.length)
		{
			return -1;
		}
		else
		{
			return iCnt;
		}
	}
}
class Program12
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
		iRet = nobj.FirstOccurance(arr,iValue);
		
		
		System.out.println("FirstOccurance Number is at index : "+iRet);
		
	}
}


