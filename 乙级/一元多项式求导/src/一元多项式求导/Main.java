package 一元多项式求导;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int count = 0 ;
		int[] zhishu = new int[1000];
		int[] xishu = new int[1000];
		int[] daoshu = new int[1000];
		int a = in.nextInt();
		int b = in.nextInt();
		xishu[count] = a;
		zhishu[count] = b;
		daoshu[count] = xishu[count] * zhishu[count];
		zhishu[count]--;
		if ( zhishu[count] == -1 ){
			System.out.print(daoshu[count]+" "+(zhishu[count]+1));
		}
		else{
			System.out.print(daoshu[count]+" "+zhishu[count]);
			count++; 
			while( b != 0 ){
				a = in.nextInt();
				b = in.nextInt();
				xishu[count] = a;
				zhishu[count] = b;
				daoshu[count] = xishu[count] * zhishu[count];
				zhishu[count]--;
				if ( zhishu[count] != -1){
					System.out.print(" "+daoshu[count]+" "+zhishu[count]);
				}
				count++;
			}
		}
		in.close();
	}

}
