package javaproject;
import java.util.Scanner;

public class salary {
	public static void main(String[] args) {
//if salary is greater than 10k add bonus of 2k,otherwise
//   add bonus of as 1k
		Scanner input = new Scanner(System.in);
		System.out.println("PLease enter salary:");
		int a = input.nextInt();
		int n = 0;
		if (a>10000) {
			System.out.println("Congrats you get a bonus of 2k");
			n = 2000;
		}
		else {
			System.out.println("Congrats you get a bonus of 1k");
			n = 1000;
		}
		int x = a + n;
		System.out.println("Your paycheck is " + x);
		
	}

}
