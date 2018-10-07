package ³É¼¨ÅÅÃû;

import java.util.Scanner;

class Student{
	private String Name;
	private String NO;
	private int Grade;
	
	public Student(String name, String nO, int grade) {
		Name = name;
		NO = nO;
		Grade = grade;
	}

	public String getName() {
		return Name;
	}

	public String getNO() {
		return NO;
	}

	public int getGrade() {
		return Grade;
	}
}

public class Main {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int num = in.nextInt();
		Student[] student = new Student[num];
		String name;
		String no;
		int grade;
		for ( int i = 0 ; i < num ; i++ ){
			name = in.next();
			no = in.next();
			grade = in.nextInt();
			student[i] = new Student(name, no, grade);
		}
		int min = student[0].getGrade();
		int max = student[0].getGrade();
		int maxindex = 0;
		int minindex = 0;
		for ( int i = 1 ; i < num ; i++){
			if (student[i].getGrade() > max ){
				max = student[i].getGrade();
				maxindex = i;
			}
			if ( student[i].getGrade() < min){
				min = student[i].getGrade();
				minindex = i; 
			}
		}
		System.out.println(student[maxindex].getName()+" "+student[maxindex].getNO());
		System.out.println(student[minindex].getName()+" "+student[minindex].getNO());
		in.close();
	}

}