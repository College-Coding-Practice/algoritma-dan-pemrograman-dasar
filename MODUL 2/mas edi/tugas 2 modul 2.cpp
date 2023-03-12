#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void main ()
{
	char pilih, ulang ('y');
	while (ulang=='y')
	{

		cout<<"\t|============================|\n";
		cout<<"\t|Program Penghitungan Volume|\n";
		cout<<"\t|	Bangun Ruang	|\n";
		cout<<"\t|============================|\n\n";
		cout<<"Daftar Bangun Ruang :\n";
		cout<<"1. Balok\n";
		cout<<"2. Kubus\n";
		cout<<"3. Tabung\n";
		cout<<"4. Prisma Segitiga Siku-Siku\n";
		cout<<"5. Limas Segi Empat\n";
		cout<<"\nMasukkan Pilihan Bangun Ruang :";
		cin>>pilih;
		switch (pilih)
		{
			case '1':
				float p,l,t,v_balok;
				cout<<"\n\t=======\n";
				cout<<"\t|BALOK|";
				cout<<"\n\t=======\n\n";
				cout<<"\nMasukkan Panjang Balok :";
				cin>>p;
				cout<<"\nMasukkan Lebar Balok :";
				cin>>l;
				cout<<"\nMasukkan Tinggi Balok :";
				cin>>t;
				v_balok =p*l*t;
				cout<<"\n******************";
				cout<<"\nVolume Balok :"<<v_balok;
				cout<<"\n******************";
				break;
			case '2':
				float s,v_kubus;
				cout<<"\n\t========\n";
				cout<<"\t|KUBUS|";
				cout<<"\n\t========\n";
				cout<<"\nMasukkan Sisi Kubus :";
				cin>>s;
				v_kubus=s*s*s;
				cout<<"\n******************";
				cout<<"\nVolume Kubus :"<<v_kubus;
				cout<<"\n******************";
				break;
			case '3':
				double r_tab,t_tab,v_tab;
				cout<<"\n\t========\n";
				cout<<"\t|TABUNG|";
				cout<<"\n\t========\n\n";
				cout<<"\nMasukkan Jari-Jari Tabung :";
				cin>>r_tab;
				cout<<"\nMasukkan Tinggi Tabung :";
				cin>>t_tab;
				v_tab=(3.14*r_tab*r_tab)*t_tab;
				cout<<"\n******************";
				cout<<"\nVolume Tabung :"<<v_tab;
				cout<<"\n******************";
				break;
			case '4':
				double a_pris,ta_pris,t_pris,v_pris;
				cout<<"\n\t===========================\n";
				cout<<"\t|PRISMA SEGITIGA SIKU-SIKU|";
				cout<<"\n\t===========================\n\n";
				cout<<"\nMasukkan Alas Segitiga :";
				cin>>a_pris;
				cout<<"\nMasukkan Tinggi Segitiga :";
				cin>>ta_pris;
				cout<<"\nMasukkan Tinggi Prisma :";
				cin>>t_pris;
				v_pris=0.5*a_pris*ta_pris*t_pris;
				cout<<"\n******************";
				cout<<"\nVolume Prisma :"<<v_pris;
				cout<<"\n******************";
				break;
			case '5':
				float p_lim, l_lim, t_lim, v_lim;
				cout<<"\n\t==================\n";
				cout<<"\t|LIMAS SEGI EMPAT|";
				cout<<"\n\t==================\n\n";
				cout<<"\nMasukkan Panjang Limas :";
				cin>>p_lim;
				cout<<"\nMasukkan Lebar Limas :";
				cin>>l_lim;
				cout<<"\nMasukkan Tinggi Limas :";
				cin>>t_lim;
				v_lim =p_lim*l_lim*t_lim;
				cout<<"\n******************";
				cout<<"\nVolume Limas :"<<v_lim;
				cout<<"\n******************";
				break;
			default: cout<<"\nKode Yang Anda Masukkan Salah!";
		}
	cout<<"\n\nPilih Rumus Lagi[y/n]?";
	cin>>ulang;
	}

	getch();
}

