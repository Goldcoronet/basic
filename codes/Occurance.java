package javaproject;
import java.util.Scanner;

public class Occurance {
	public static void main(String[] args) {
		System.out.println("Please enter a number:");
		Scanner input = new Scanner(System.in);
		
		int num = input.nextInt();
		System.out.println("Which no do you want to find");
		Byte n = input.nextByte();
		int x = 0;
		
		while (num>0) {
			int rem = num%10;
			if (rem == n) {
				x++;
			}
			num= num/10;
		}
		System.out.println(n + " occurs " + x + " no. of times");
	}

}
