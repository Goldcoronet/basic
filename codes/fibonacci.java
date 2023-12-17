package javaproject;
import java.util.Scanner;

public class fibonacci {
	public static void main(String[] args) {
		System.out.println("till where do you want the seq.:");
		
		Scanner input = new Scanner(System.in);
		
		int a = 0;
		int b = 1;
		int n = input.nextInt();
		int x = 0;
		System.out.println(a);
		System.out.println(b);
		for (int i = 0; i<=n; i++) {
			x = b + a;
			System.out.println(x);
			a = b;
			b = x;
			
		}
	}

}
