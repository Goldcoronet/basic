package javaproject;
import java.util.Scanner;

public class reverse {
	public static void main(String[] args) {
		System.out.println("Please enter a no.:");
	Scanner input = new Scanner(System.in);
	int n = input.nextInt();
	int y = n;
	int p = 0;
	
	while (n>0) {
		n = n/10;
		p++;
	}
	p = p-1;
		int x = 0;
		int l = (int) Math.pow(10,p);
		
		while (y>0) {
			int a = (y%10)*l;
			x = x + a;
			l = l/10;
			y= y/10;
		}
		System.out.println(x);
	}

}
