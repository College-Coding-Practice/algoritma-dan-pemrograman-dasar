#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	while(a=4)
	{
		system("cls");
		cout<<"MENU PILIHAN\n";
		cout<<"1. Baca Data\n";
		cout<<"2. Ubah Data\n";
		cout<<"3. Hapus Data\n";
		cout<<"4. Exit\n";
		cout<<"Pilihan Anda(1/2/3/4):";
		cin>>a;
		if(a<4)
		{
			cout<<"Anda memilih menu"<<a<<"\n";
			cout<<"Tekan ENTER untuk kembali ke menu utama\n";
		}
		else if(a=4)
			cout<<"Exit\n";
		else{
			cout<<"Maaf, nomer yang anda pilih tidak termasuk\n";
			cout<<"Tekan ENTER untuk kembali ke menu utama\n";
		}
		getch();}
}