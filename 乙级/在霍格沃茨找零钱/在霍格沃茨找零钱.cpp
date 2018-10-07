#include <iostream>
#include <stdio.h>
using namespace std;

struct Money{
	int Galleon;
	int Sickle;
	int Knut;
};

int IsGreater(struct Money own , struct Money pay )
{
	int sum1 = (own.Galleon * 17 + own.Sickle) * 29 + own.Knut;
	int sum2 = (pay.Galleon * 17 + pay.Sickle) * 29 + pay.Knut;
	int flag = ( sum1 >= sum2)? 1 : 0;
	
	return flag;
}

void Swap(struct Money *own , struct Money *pay )
{
	own->Galleon = own->Galleon + pay->Galleon;
	pay->Galleon = own->Galleon - pay->Galleon;
	own->Galleon = own->Galleon - pay->Galleon;
	
	own->Sickle = own->Sickle + pay->Sickle;
	pay->Sickle = own->Sickle - pay->Sickle;
	own->Sickle = own->Sickle - pay->Sickle;
	
	own->Knut = own->Knut + pay->Knut;
	pay->Knut = own->Knut - pay->Knut;
	own->Knut = own->Knut - pay->Knut;
}

struct Money Return(struct Money own , struct Money pay)
{
	struct Money get;
	if ( own.Knut >= pay.Knut){
		get.Knut = own.Knut - pay.Knut;
	}else{
		own.Sickle--;
		get.Knut = own.Knut + 29 - pay.Knut;
	}
	
	if ( own.Sickle >= pay.Sickle){
		get.Sickle = own.Sickle - pay.Sickle;
	}else{
		own.Galleon--;
		get.Sickle = own.Sickle + 17 - pay.Sickle;
	}
	
	get.Galleon = own.Galleon - pay.Galleon;
	return get;
}

int main()
{
	struct Money pay;
	struct Money own;
	struct Money get;
	scanf("%d.%d.%d %d.%d.%d",&pay.Galleon,&pay.Sickle,&pay.Knut,&own.Galleon,&own.Sickle,&own.Knut);
	get.Galleon = 0;
	get.Sickle = 0;
	get.Knut = 0;
	
	if (IsGreater(own, pay) == 0){
		Swap(&own,&pay);
		get = Return(own,pay);
		get.Galleon = - get.Galleon;
	}else{
		get = Return(own,pay);
	}

	cout<<get.Galleon<<"."<<get.Sickle<<"."<<get.Knut;
	
	return 0;
}
