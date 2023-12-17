package javaproject;

import java.util.Scanner;

public class Prime {
	public static void main(String[] args) {
//Check whether input is prime or not
	 Scanner input = new Scanner(System.in);
		System.out.println("Enter a number :");
		int a = input.nextInt();
		int c = 2;
		int n = 0;
		
		if (a <= 1){
            System.out.println("neither prime nor composite");
            n--;
        }
		
		while(c<a) {
			if (a%c==0) {
				n++;
				c++;
				}
			else
			{
				c++;
			}
		}
		if (n==0) {
			System.out.println("prime");
	 }
		if(n>0) {
			System.out.println("not prime");
		}
	}
}

		