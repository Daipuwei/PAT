package 数组元素循环右移问题;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		m = n - m % n;
		int flag = 0;
		int[] a = new int[n];
		for ( int i = 0 ; i < n ; i++  ){
			a[i] = in.nextInt();
		}
		for ( int i = m ; i < n ; i++ ){
			if ( flag == 1 ){
				System.out.print(" "+a[i]);
			}
			else{
				System.out.print(a[i]);
				flag = 1;
			}
		}
		for ( int i = 0 ; i < m ; i++ ){
			if ( flag == 1){
				System.out.print(" "+a[i]);
			}
			else{
				System.out.print(a[i]);
				flag =1;
			}
			
		}
		in.close();
	}

}
