package javaproject;
import java.util.Scanner;

public class AllCaps {
	public static void main(String[] args) {
		System.out.println("Please enter a word:");
		Scanner input = new Scanner(System.in);
		
		String word = input.next();
		int n = 0;
		for (int i=0; i < word.length(); i++) {
			if (word.charAt(i)>='A'&& word.charAt(i)<='Z') {
				n++;
			}
		}
		if (n==word.length()) {
			System.out.println("All Caps bruh");
		}
		
		if (n==0) {
			System.out.println("No Caps Bruh");
		}
		if (n<word.length()&& n!=0) {
			System.out.println("Some Caps Bruh");
		}
		System.out.println("Also there are " + n + " no. of caps");
	}

}
