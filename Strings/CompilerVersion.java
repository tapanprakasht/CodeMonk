import java.util.Scanner;
public class CompilerVersion
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		String line;
		while(sc.hasNext())
		{
			line = sc.nextLine();
			System.out.println(line.replaceFirst("->","."));
		}
	}
}
