#include <iostream>
using namespace std;

char nama[45];
char nim[45];
char jurusan[45];
char alamat[45];
char tempat_lahir[45];
char tanggal_lahir[45];
char semester[45];

int main(){
	cout<<"Masukkan Nama Kamu:"<<endl;
	cin>>nama;
	cout<<"Masukkan NIM:"<<endl;
	cin>>nim;
	cout<<"Masukkan Nama Jurusan:"<<endl;
	cin>>jurusan;
	cout<<"Masukkan alamat:"<<endl;
	cin>>alamat;
	cout<<"MasukkanTempat Lahir:"<<endl;
	cin>>tempat_lahir;
	cout<<"Masukkan Tanggal Lahir:"<<endl;
	cin>>tanggal_lahir;
	cout<<"Masukkan Semester:"<<endl;
	cin>>semester;

	cout<<"+++++++++++++++++++++++++++++++++"<<endl;
	cout<<"biodata kamu"<<nama<<endl;
	cout<<"Nama:"<<nama<<endl;
	cout<<"NIM:"<<nim<<endl;
	cout<<"Nama Jurusan:"<<jurusan<<endl;
	cout<<"Tempat Lahir:"<<tempat_lahir<<endl;
	cout<<"Tanggal Lahir:"<<tanggal_lahir<<endl;
	cout<<"Semester:"<<semester<<endl;
	return 0;
}