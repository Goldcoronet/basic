package javaproject;
import java.util.Scanner;

public class CaseCheck {
	public static void main(String[] args) {
		System.out.println("Please enter a word:");
		Scanner input = new Scanner(System.in);
		char word = input.next().trim().charAt(0);
		
		
		
		if (word>= 'a'&& word <= 'z') {
			System.out.println("lowercase");
		}
		else {
			System.out.println("uppercase");
		}
	}

}
