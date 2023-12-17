package javaproject;
import java.util.Scanner;

public class largest {
	public static void main(String[] args) {
//Find the largest no.
		
		Scanner input = new Scanner(System.in);
		System.out.println("Please enter three numbers:");
		int a = input.nextInt();
		int b = input.nextInt();
		int c = input.nextInt();
		
		int max = a;
		
		if (b>max) {
			max = b;
		}
		if (c>max) {
			max = c;
			}
		System.out.println(max + " is largest no.");

 }
}