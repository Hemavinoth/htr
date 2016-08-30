import java.util.*;
import java.lang.*;
import java.io.*;

class ana
{
	public static void main (String[] args) 
	{
	Scanner sc=new Scanner(System.in);
	int n=sc.next();
	System.out.println("both are "+anagram(n));
	}
	public static boolean anagram(String n)
	{
	    char[] c1=n.toCharArray();
	    Arrays.sort(c1);
	    return Arrays.equals(c1);
	}
}
