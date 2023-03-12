#include <iostream>
using namespace std;

int main(){
	int bayar, akhir, potongan;
	char nama_kasir[40];
	char nama_pembeli[40];

	cout<<"===GEMA INSANI==="<<endl;
	cout<<"Masukan nama kasir:"<<endl;
	cin>>nama_kasir;
	cout<<"Masukan nama pembeli:"<<endl;
	cin>>nama_pembeli;

	cout<<"Program potongan harga"<<endl;
	cout<<"Masukan total pembayaran="<<endl;
	cin>>bayar;
	if((bayar<50000)){
		potongan=bayar*0.05;
		akhir=bayar-potongan;
		cout<<"Selamat anda mendapat potongan 5%"<<endl;
	}else if (bayar>=50000){
		potongan=bayar*0.20;
		akhir=bayar-potongan;
		cout<<"Selamat anda mendapat potongan 20%"<<endl;
	}else{
		akhir=bayar;
	}
	cout<<"jadi total pembayarannya="<<akhir<<endl;

	return 0;
}