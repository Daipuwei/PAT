#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Person{
	string Name;
	int Height;
	bool operator < ( const Person& a)const{
		if (Height != a.Height){
			return Height > a.Height;
		}else{
			return strcmp(Name.c_str(),a.Name.c_str()) < 0;
		}
	}
};

void Print(int index ,int n,struct Person* person)
{
	int I[n];
	I[n/2] = index;
	int left = n / 2 - 1;
	int right = n / 2 + 1;
	int i = index+1;
	while ( left >= 0 || right < n){
		if ( left >= 0){
			I[left--] = i++; 
		}
		if ( right < n){
			I[right++] = i++;
		} 
	}
	
	cout<<person[I[0]].Name;
	for ( int i = 1 ; i < n ; i++){
		cout<<" "<<person[I[i]].Name;
	}
	cout<<endl;
}

int main()
{
	int Num,Col,Row;
	cin>>Num>>Col;
	Row = Num / Col;
	struct Person person[Num];
	for ( int i = 0 ; i < Num ; i++){
		cin>>person[i].Name>>person[i].Height;
	}
	sort(person,person+Num);
	Print(0,Row + Num % Col,person);
	for ( int i = Row + Num % Col ; i < Num ; i += Row ){
		Print(i, Row , person);
	}
	
	return 0;
}
