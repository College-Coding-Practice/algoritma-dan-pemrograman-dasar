#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int n, hasil=0;

int main()
{
	long int setoran, ambilan, saldo=0, saldo_awal=100000;
	int pil=0;

		char ulang;
		do
		{
			while(true)
			{
				system("cls");
				printf("\t==============================================\n");
				printf("\t|        Program Transaksi Tabungan          |\n");
				printf("\t|       PT. semoga punya bank pribadi        |\n");
				printf("\t|                 MAS EDI                    |\n");
				printf("\t==============================================\n");
				cout<<"\t\t+---------------------------------------+\n";
				cout<<"\t\t|  PT. semoga punya bank pribadi        |\n";
				cout<<"\t\t+---------------------------------------+\n";
				if(saldo>saldo_awal)
				{
					cout<<"\t--> saldo : Rp. "<<saldo<<endl<<endl<<endl;
				}
				else
				{
					cout<<"\t--> saldo : Rp. "<<saldo_awal<<endl<<endl;
				}
				cout<<"\t+-----------------------+\n";
				cout<<"\t|    Menu Transaksi     |\n";
				cout<<"\t+-----------------------+\n";
				cout<<"\t| 1. setor tabungan     |\n";
				cout<<"\t| 2. ambil tabungan     |\n";
				cout<<"\t| 3. exit               |\n";
				cout<<"\t+-----------------------+\n";
				cout<<"\tPilihan menu (1/2/3) ?";
				cin>>pil;
				cout<<endl<<endl;
				while (pil==1)
				{
					cout<<"\t+------------------------+\n";
					cout<<"\t|    Menu Setor Tabungan +\n";
					cout<<"\t+------------------------+\n\n";
					cout<<"\tMasukkan jumlah setoran : Rp. ";
					cin>>setoran;
					if (saldo>5000)
					{
						saldo=saldo+setoran;
					}
					else
					{
						saldo=saldo_awal+setoran;
					}
					break;
				}
				while (pil==2)
				{
					cout<<"\t+-------------------------------+\n";
					cout<<"\t|  Menu ambil tabungan          |\n";
					cout<<"\t+-------------------------------+\n\n";
					cout<<"\tMasukkan jumlah pengambilan : Rp. ";
					cin>>ambilan;
					if (saldo>5000 || saldo_awal==5000)
					{
						if (saldo-ambilan>=5000)
						{
							saldo=saldo-ambilan;
						}
						else
						{
							saldo_awal=saldo_awal;
							saldo=saldo;
							cout<<"\n\t Maaf, saldo anda tidak mencukupi";
							cout<<"\n\t Batas minimum saldo harus Rp. 5.000\n\n";
							getch();
						}
					}
					break;
				}
				while (pil==3)
				{
					goto akhir;
				}
			}
			akhir:

			cout<<"\t+------------------------------+\n";
			cout<<"\t|       Menu Exit              |\n";
			cout<<"\t+------------------------------+\n";
			cout<<"\tApakah anda yakin ingin keluar (Y/T) ?";
			cin>>ulang;
		}
		while ((ulang=='T') || (ulang=='t'));
		cout<<"\t\t\n    Terima kasih atas transaksi yang anda lakukan\n\n";
		{
			for(n=0; n<5; ++n)
			{

			}
				cout<<hasil;
	
		getch();
		return 0;
}