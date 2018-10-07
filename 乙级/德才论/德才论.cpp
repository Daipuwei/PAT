#include <stdio.h> 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

struct Student{
	int Id;
	int DeGrade;
	int CaiGrade;
	bool operator <(const Student &A) const{
        if(this->CaiGrade + this->DeGrade != A.CaiGrade + A.DeGrade)
            return this->CaiGrade + this->DeGrade > A.CaiGrade + A.DeGrade;
        else if( this->DeGrade != A.DeGrade)
            return this->DeGrade > A.DeGrade;
        else return this->Id < A.Id;
    }
};

int main()
{
	int Num;
	int Min;
	int Pariority;
	cin>>Num>>Min>>Pariority;
	int count = 0;
	Student student;
	vector<Student> student1,student2,student3,student4; 
	int Sum;
	for ( int i  = 0 ; i < Num ; i++){
		cin>>student.Id>>student.DeGrade>>student.CaiGrade;
		if ( (student.DeGrade >= Min) && (student.CaiGrade >= Min)){
			count++;
			if ( (student.DeGrade >= Pariority) && (student.CaiGrade >= Pariority)){
				student1.push_back(student); 
			}else if ( student.DeGrade >= Pariority ){
					student2.push_back(student);
			}else if (student.DeGrade >= student.CaiGrade){
					student3.push_back(student);
			}else{
					student4.push_back(student);
			} 
		}
	}
	
	sort(student1.begin(),student1.end());
	sort(student2.begin(),student2.end());
	sort(student3.begin(),student3.end());
	sort(student4.begin(),student4.end());
	
	vector<Student>::iterator it;
	cout<<count<<endl;
	for ( it = student1.begin() ; it != student1.end() ; ++it){
		printf("%d %d %d\n",it->Id,it->DeGrade,it->CaiGrade);
	}
	for ( it = student2.begin() ; it != student2.end() ; ++it){
		printf("%d %d %d\n",it->Id,it->DeGrade,it->CaiGrade);
	}
	for ( it = student3.begin() ; it != student3.end() ; ++it){
		printf("%d %d %d\n",it->Id,it->DeGrade,it->CaiGrade);
	}
	for ( it = student4.begin() ; it != student4.end() ; ++it){
		printf("%d %d %d\n",it->Id,it->DeGrade,it->CaiGrade);
	}
	
	return 0;
}
