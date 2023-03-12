#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
	int pdpt, jasa=0, komisi=0, total=0;
	cout<<"Pendapatan hari ini: Rp."<<endl;
	cin>>pdpt;
	
	if(pdpt>=20000&&pdpt<30000){jasa=10000;
	komisi=0.1*pdpt;
	}else{
		if(pdpt>=30000&&pdpt<50000){jasa=20000;
	komisi=0.15*pdpt;
		}else{
		if(pdpt>50000){jasa=30000;
	komisi=0.2*pdpt;
	}else
		{jasa=0;
	komisi=0;
	}
	total=komisi+jasa;

	cout<<"Uang jasa:Rp."<<endl;
	cout<<"Uang komisi:Rp."<<endl;
	cout<<"=================="<<endl;
	cout<<"Hasil total:Rp."<<endl;

	system("pause");
	return 0;
}