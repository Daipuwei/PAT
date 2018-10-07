package 换个格式输出整数;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] a = new int[3];
		int count = 0;
		while ( n != 0){
			a[count++] = n % 10;
			n = n / 10;
		}
		count--;
		switch(count+1){
		case 3 : for ( int i = 0 ; i < a[count] ; i++){
			System.out.print("B");
		}
		count--;
		case 2 : for ( int i = 0 ; i < a[count] ; i++ ){
			System.out.print("S");
		}
		count--;
		case 1 : if ( a[count] == 0){
			break;
		}
		else{
			int[] b = {1,2,3,4,5,6,7,8,9};
			for ( int i = 0 ; i < a[count] ; i++ ){
				System.out.print(b[i]);
			}
		}
		}
		in.close();
	}

}
