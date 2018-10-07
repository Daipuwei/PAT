#include <iostream>
#include <string>
#include <stdio.h> 
#include <cstring>
using namespace std;

string gewei[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string shiwei[13] ={" ","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	

int Number(string str)
{
	int sum = 0;
	for ( int i = 0 ; i < str.length() ; i++){
		sum = sum * 10 + (str[i] -'0');
	}
	return sum;
}

void Exchange_Mars(string str)
{
	int num = Number(str);
	int a = num / 13;
	int b = num % 13;
	if ( shiwei[a] != " "){
		cout<<shiwei[a]<<" ";
	}
	cout<<gewei[b]<<endl;
}

int Search(string str[] ,int n,string tmp)
{
	int index = -1;
	for ( int i = 0 ; i < n ; i++){
		if ( tmp == str[i]){
			index= i;
			break;
		}
	}
	return index;
}

void Exchange_Earth(string str)
{
	int len = str.length();
	int i;
	int flag = 0;
	for ( i = 0 ; i < len ; i++){
		if (str[i] == ' '){
			flag = 1;
			break;
		}
	}
	string str1 ,str2;
	if ( flag == 1){
		str1 = str.substr(0,i);
		str2 = str.substr(i+1,len-i-1);
		int a = Search(shiwei,13,str1);
		int b = Search(gewei,13,str2);
		int sum;
		if ( a != -1 && b != -1)
			sum = a * 13 + b;
		cout<<sum<<endl;
	}else{
		int a = Search(shiwei,13,str);
		int b = Search(gewei,13,str);
		if ( a != -1 || b != -1){
			if ( a != -1){
				cout<<a*13<<endl;
			}
			if ( b != -1){
				cout<<b<<endl;
			}
		}
	}
	
}

void Exchange(string str)
{
	if ( str[0] >= '0' && str[0] <= '9'){
		Exchange_Mars(str);
	}else{
		Exchange_Earth(str);
	}
}

int main()
{	
	int num;
	cin>>num;
	string str[num];
	char string[10];
	gets(string);
	str[0].append(string,strlen(string));
	Exchange(str[0]);
	for ( int i = 0 ; i < num ; i++){
		gets(string);
		str[i].append(string,strlen(string));
		Exchange(str[i]);
	}
		
	return 0;
}
