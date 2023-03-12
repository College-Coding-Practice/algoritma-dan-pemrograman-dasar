#include <iostream> //sebagai standar input output operasi yg digunakan oleh bahasa c++ 
#include <conio.h> //menampilkan hasil antarmuka kepada pengguna
#include <stdlib.h> //operasi pembanding dan operasi konversi
#include <iomanip> //mengatur tampilan layar
using namespace std;

int main()
{
	char hari, ulang ('y');
	while (ulang=='y') //untuk perulangan, dan harus memastikan suatu saat fungsi ada yang FALSE karena kalo tidak fungsi akan terus berjalan
	{

	cout<<"PILIHAN:"<<endl;
	cout<<"A=SENIN"<<endl;
	cout<<"B=SELASA"<<endl;
	cout<<"C=RABU"<<endl;
	cout<<"D=KAMIS"<<endl;
	cout<<"E=JUMAT"<<endl;
	cout<<"F=SABTU"<<endl;
	cout<<"G=MINGGU"<<endl; //endl:perintah newline
	cout<<"MASUKKAN KODE HARI (A-G):"<<endl; //cout: menampilkan data
	cin>>hari; //cin:memasukkan data
	{
	if(hari=='a'||hari=='A')
		cout<<"senin";
			else
				if(hari=='b'||hari=='B')
					cout<<"selasa";
						else
							if(hari=='c'||hari=='C')
								cout<<"rabu"<<endl;
									else
										if(hari=='d'||hari=='D')
											cout<<"kamis";
												else
													if(hari=='e'||hari=='E')
														cout<<"jumat"<<;
															else
																if(hari=='f'||hari=='F')
																	cout<<"sabtu";
																		else
																			if(hari=='g'||hari=='G')
																				cout<<"minggu"<<endl;
		else 
	cout<<"Maaf kode yang anda masukkan salah";
	}
	cout<<"\nPilih kode hari lagi [y/n]?";
	cin>>ulang;
	}
	getch(); //merupakan singkatan dari get character and echo yang digunakan utk menahan (pause) output suatu prgrm dan akan kembali mengekskusi stlh kita melkukan inputan baik enter atau tombol lainnya dan inputan tadi tidak ditampilkan di window

} 