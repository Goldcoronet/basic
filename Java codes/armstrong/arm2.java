package javaproject;
import java.util.Scanner;

public class arm2 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("enter limit:");
		 int i = input.nextInt();
		 
		 for (int n= 0; n<i; n++) {
			 if (check(n)) {
			 System.out.println(n+" ");
		 }
		 }
		 
		 }
		 
	static boolean check(int x) {
        int original = x;
        int sum = 0;
        while (x > 0) {
            int r = x % 10;
            x = x / 10;
            sum = sum + r * r * r;
        }
        return (sum==original);
       }
}
