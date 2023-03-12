#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int kolom1, kolom2, kolom3;
	printf("\t======================================\n");
	printf("\t|   Program penyelesaian persamaan   |\n");
	printf("\t|           yaitu x+y+z=20           |\n");
	printf("\t| -->           Mas Edi          <-- |\n");
	printf("\t======================================\n");
	cout<<"================================="<<endl;
	cout<<"| x         y          z        |"<<endl;
	cout<<"================================="<<endl;
	for(kolom1=0;kolom1<=20;kolom1++)
	{
		for(kolom2=0;kolom2<=20;kolom2++)
			for(kolom3=20;kolom3>=0;kolom3--)
				if((kolom1+kolom2+kolom3)==20)
					printf(" %d\t %d\t %d\n", kolom1, kolom2, kolom3);
		getch();
	}
	getch();
}