#include <iostream>
#include <string>
using namespace std;

int main(){
	int jual, komisi, akhir;
	char nama_kasir[40];
	char nama_salesman[40];

	cout<<"===SEJAHTERA HALAL SENTOSA==="<<endl;
	cout<<"Masukan nama kasir:"<<endl;
	cin>>nama_kasir;
	cout<<"Masukan nama salesman:"<<endl;
	cin>>nama_salesman;

	cout<<"Program penjualan barang"<<endl;
	cout<<"Masukan total penjualan="<<endl;
	cin>>jual;
	if((jual<20000)){
		komisi=jual*0.10;
		akhir=jual-komisi;
		cout<<"Selamat anda mendapat komisi 10% dan jasa 10000"<<endl;
	}else if (jual>20000){
		komisi=jual*0.15;
		akhir=jual-komisi;
		cout<<"Selamat anda mendapat komisi 15% dan jasa 20000"<<endl;
	}else if (jual>50000){
		komisi=jual*0.30;
		akhir=jual-komisi;
		cout<<"Selamat anda mendapat komisi 20% dan jasa 30000"<<endl;
	}else{
		akhir=jual;
	}
	cout<<"jadi total penjualannya="<<akhir<<endl;

	return 0;
}