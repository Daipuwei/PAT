#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
	int m;
	const int N = 100010;
	int couple[N] = {0};
	int judge[N] = {0};
	cin>>m;
	for (int i = 0 ; i < m ; i++){
		int a,b;
		cin>>a>>b;
		couple[a] = b;
		couple[b] = a;
	} 
	int n;
	cin>>n;
	for ( int i = 0 ; i < n ; i++){
		int dog;
		cin>>dog;
		judge[dog] = 1;
	}
	
	vector<int> ans;
	for ( int i = 0 ; i < N ; i++){
		if (judge[i] && judge[couple[i]] == 0){
			ans.push_back(i);
		}
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		printf("%05d",ans[i]);  
    	if(i!=ans.size()-1)  
            cout<<" ";  
  
    }  
	return 0;
}
