import java.util.*;

public class NobitaStrings
{
	public static void main(String args[])
	{
		String str;
		int i;
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();
		sc.nextLine();
		while(n>0)
		{
			str = sc.nextLine();
			String[] parts = str.split(" ");
			for(i=parts.length-1;i>=0;i--)
			{
				System.out.print(parts[i]+" ");
			}
			System.out.println("");
			n--;
		}
	}
}