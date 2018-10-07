package Ëµ·´»°;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		String[] str = s.split(" ");
		for ( int i = str.length-1 ; i > 0 ; i-- ){
			System.out.print(str[i]+" ");
		}
		System.out.print(str[0]);
		in.close();
	}

}
