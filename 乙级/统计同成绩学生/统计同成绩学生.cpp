#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int* data, int n, int score) {  
    int left = 0, right = n - 1;  
    int mid = 0;  
    while(left <= right) {  
        mid = (left + right) >> 1;  
        if(score < data[mid])  
            right = mid - 1;  
        else if(score > data[mid])  
            left = mid + 1;  
        else  
            break;  
    }  
    int num = 0;  
    if(data[mid] == score) {    //如果能找到同分的，开始左右找同一分数并确定个数；否则返回0个   
        for(int i = mid; i < n && data[i] == score; ++i)  
            ++num;  
        for(int i = mid - 1; i >= 0 && data[i] == score; --i)  
            ++num;  
    }  
    return num;  
}  

int main()
{
	int num;
	cin>>num;
	int grade[num];
	for ( int i = 0 ; i < num ; i++){
		cin>>grade[i];
	}
	sort(grade,grade+num);
	
	int searchnum;
	cin>>searchnum;
	int searchgrade[searchnum];
	int cnt[searchnum] = {0};
	for ( int i = 0 ; i < searchnum ; i++){
		cin>>searchgrade[i];
		cnt[i] = BinarySearch(grade, num, searchgrade[i]);
	}
	cout<<cnt[0];
	for ( int i = 1 ; i < searchnum ; i++){
		cout<<" "<<cnt[i];
	}
	
	return 0;
 } 
