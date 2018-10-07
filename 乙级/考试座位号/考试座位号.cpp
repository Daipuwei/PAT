#include <iostream>
#include <algorithm> 
using namespace std;

struct ID{
	string Id;
	int TestNo;
	int ExamNo;
	bool operator < ( const ID & a) const{
		return TestNo < a.TestNo;
	}
};

int main()
{
	int num;
	cin>>num;
	struct ID Student[num+1];
	for ( int i = 1 ; i <= num ; i++){
		cin>>Student[i].Id>>Student[i].TestNo>>Student[i].ExamNo; 
	}
	
	int n;
	cin>>n;
	int testno[n];
	for ( int i = 0 ; i < n ; i++){
		cin>>testno[i];
	}
	
	sort(Student+1,Student+num+1);
	for ( int i = 0 ; i < n ; i++){
		cout<<Student[testno[i]].Id<<" "<<Student[testno[i]].ExamNo<<endl;	
	}
	
	return 0;
}
