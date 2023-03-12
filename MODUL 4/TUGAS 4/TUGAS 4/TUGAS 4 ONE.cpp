#include <iostream>
using namespace std;

int main(){
	int bayar, akhir, diskon;
	char nama_kasir[40];
	char nama_pembeli[40];

	cout<<"===HALAL MAKMUR JAYA==="<<endl;
	cout<<"Masukan nama kasir:"<<endl;
	cin>>nama_kasir;
	cout<<"Masukan nama pembeli:"<<endl;
	cin>>nama_pembeli;

	cout<<"Program diskon harga"<<endl;
	cout<<"Masukan total pembayaran="<<endl;
	cin>>bayar;
	if((bayar<50000)){
		diskon=bayar*0.0;
		akhir=bayar-diskon;
		cout<<"anda tidak dapat diskon"<<endl;
	}else if (bayar>=50000){
		diskon=bayar*0.20;
		akhir=bayar-diskon;
		cout<<"Selamat anda mendapat diskon 20%"<<endl;
	}else{
		akhir=bayar;
	}
	cout<<"jadi total pembayarannya="<<akhir<<endl;

	return 0;
}