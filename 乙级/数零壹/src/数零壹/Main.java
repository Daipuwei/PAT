package ÊýÁãÒ¼;

import java.io.IOException;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char p = ' ';
		int sum =0;
		do{
			try {
				p = (char) System.in.read();
				if ( p >= 'A' && p <= 'Z'){
					sum += (p - 'A' + 1);
				}
				if ( p >= 'a' && p <= 'z'){
					sum += (p - 'a' + 1);
				}
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}while( p != '\n');
		int count0 = 0;
		int count1 = 0;
		while( sum != 0){
			if ( sum % 2 == 0){
				count0++;
			}
			else{
				count1++;
			}
			sum /= 2;
		}
		System.out.print(count0+" "+count1);
	}

}
