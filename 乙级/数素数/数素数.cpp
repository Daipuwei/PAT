#include<cmath>
#include<iostream>
using namespace std;

bool isPrime(int a)
{
	if(a==1 || a==0)
		return false;
	if(a==2)
		return true;
	if(a%2 == 0)
		return false;
	int temp = (int)sqrt((double)a);
	for(int i = 3;i<=temp;i++)
		if(a%i ==0 )
			return false;
	return true;
}

int main()
{
	int left,right;
	cin>>left>>right;
	int i = 1;
	int count = 0;//¼ÆÊıËØÊı
	while(1)
	{
		i++;
		if(isPrime(i))
			count++;
		if(count==left)
			break;
	}
	while(count<right)
	{
		cout<<i;
		if((count-left)%10!=9)
			cout<<" ";
		i++;
		while(!isPrime(i))
			i++;
		count++;
		if((count-left)%10==0)
			cout<<endl;
	}
	cout<<i;

	system("pause");
	return 0;
}
