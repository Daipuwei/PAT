#include <iostream>
using namespace std;

bool check(int* A , int* Order,int N)
{
	bool flag = true;
	for ( int i = 0 ; i < N ; i++){
		if ( A[i] != Order[i]){
			flag = false;
			break;
		}
	}
	return flag;
}

void Swap(int* a , int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Print(int* A ,int N)
{
	cout<<A[0];
	for ( int i = 1 ; i < N ; i++){
		cout<<" "<<A[i];
	}
}

bool Insert_Sort(int* A ,int* B , int N)
{
	bool isInsert = false;
	int i , j;
	for ( i = 1 ; i < N ; i++){
		int tmp = A[i];
		for ( j = i ; j > 0 && A[j-1] > tmp ; j--){
			A[j] = A[j-1];
		}
		A[j] = tmp;
		if(isInsert){
            cout << "Insertion Sort" << endl;
            Print(A,N);
            break;
        }else if(check(A,B,N)){
            	isInsert = true;
        	}
	}
	return isInsert;
 } 

void Merge(int a[], int low, int mid, int high)
{
    int t[high - low];
    int i = low, j = mid, k = 0;

    while(i < mid && j < high){
        if(a[i] <= a[j])
            t[k ++] = a[i ++];
        else
            t[k ++] = a[j ++];
    }

    while(i < mid)
        t[k ++] = a[i ++];
    while(j < high)
        t[k ++] = a[j ++];

    for(i = low, k = 0; i < high; i ++){
        a[i] = t[k ++];
    }
}

bool Merge_Sort(int* A , int* B,int N)
{
	int i ,j;
	bool isMerge = false;
	for ( i = 1 ; i < N ; i *= 2){
		for ( j = 0 ; j < N ; j += i*2){
			if ( j + i*2 <= N){
				Merge(A,j,j+i,j+i*2);
			}else if ( j + i <= N){
				Merge(A,j,j+i,N);
			}
		}
		if(isMerge){
            cout << "Merge Sort" << endl;
            Print(A,N);
            break;
        }else if(check(A,B,N)){
            	isMerge = true;
            }
	}
	return isMerge;
}

int main()
{
	int N; 
	cin>>N;
	int A[N],C[N];
	int B[N];
	for ( int i = 0 ; i < N ; i++){
		cin>>A[i];
		C[i] = A[i];
	} 
	for ( int i = 0 ; i < N ; i++){
		cin>>B[i];
	}
	
	bool flag1 = Merge_Sort(A,B,N);
	if ( flag1 == true){
		return 0;
	}else{
		bool flag2 = Insert_Sort(C,B,N);	
		return 0;
	}
}
