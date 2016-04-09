import java.util.*;
import java.lang.*;
public class Power{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		CharSequence char1 = "000000";
		CharSequence char2 = "111111";
		if(str.contains(char1) || str.contains(char2))
		{
			System.out.println("Sorry, sorry!");
		}
		else
			System.out.println("Good luck!");
	}	
}
