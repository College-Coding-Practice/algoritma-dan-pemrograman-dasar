#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char kata[20];
	cout<<"Masukkan Kata:";
	cin.getline(kata,sizeof(kata));
	int jumlah_vokal=0,jumlah_nonvokal=0;
	for(int i=0;i<strlen(kata);i++)
	{
		if(kata[i]=='a'||kata[i]=='i'||kata[i]=='u'
			||kata[i]=='e'||kata[i]=='o'
			||kata[i]=='A'||kata[i]=='I'||kata[i]=='U'
			||kata[i]=='E'||kata[i]=='O')
		{
			jumlah_vokal=jumlah_vokal+1;
		}
		else if(kata[i]==""[0])
		{
			cout<<"Inputan salah"<<endl;
		}
		else
			jumlah_nonvokal=jumlah_nonvokal+1;
	}
	cout<<"Jumlah Huruf Vokal="<<jumlah_vokal<<endl;
	cout<<"Jumlah Huruf Konsonan="<<jumlah_nonvokal<<endl;
	getch();
	return 0;
}
