package javaproject;

import java.util.Iterator;

public class Pyramid {
	
	public static void main(String[] args) {
		for (int i = 0; i <5; i++) {
			for (int space = i; space < 5; space++) 
				System.out.print(" ");
			
			for (int j = 0; j <(i+1); j++) 
				System.out.print("* ");
			
			System.out.println();
		}
		
	}}


