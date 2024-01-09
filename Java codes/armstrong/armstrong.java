package javaproject;
import java.util.Scanner;

public class armstrong {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		
		for (int n = 100; n<1000; n++){
			int p= n/100;
			int q =(n/10)-(p*10);
			int r = n-(p*100+q*10);
			int x = (p*p*p)+(q*q*q)+(r*r*r);
			if (x == n) {
				System.out.println(x +" is armstrong");
			}
			
		}
		
	}

}
