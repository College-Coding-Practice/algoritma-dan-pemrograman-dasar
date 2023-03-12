#include <iostream>
using namespace std;

int main()
{
	int sisi, luas;
	cout<<"=========================="<<endl;
	cout<<"==Program Luas Persegi (Cpp)==\n";
	cout<<"=========================="<<endl;

	cout<<"\nRumus untuk menghitung luas persegi = Sisi x Sisi";
	cout<<"\n\nMasukkan panjang Sisi persegi:";

	cin>>sisi;

	luas=sisi*sisi;
	
	cout<<endl<<"Luas persegi="<<luas;

	return 0;
}