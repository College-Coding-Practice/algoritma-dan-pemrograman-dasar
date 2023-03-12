#include "iostream"
#include "iostream"
#include "conio.h"
#include "string.h"
#include "stdio.h"
using namespace std ;

void main()
{
 char kasir[10], pemb[20];
 int p, q, r;


 cout<<"\t==========================================\t\n "<<endl;
 cout<<" \t              Selamat datang di \t\n"<<endl;
 cout<<"\t               HALAL MAKMUR JAYA\t\n "<<endl;
 cout<<"\n"<<endl;
 cout<<"\t              Selamat Berbelanja \t\n"<<endl;
 cout<<"\t==========================================\t\n "<<endl;
 cout<<"\t         nama kasir : \t"<<endl;
 gets(kasir);
 cout<<"\t         pembeli    : \t"<<endl;
 gets(pemb);
 cout<<"\t      Total Harga   : \t"<<endl;
 cin>>p;
 cout<<"\n"<<endl;
 cout<<"\t==========================================\t\n "<<endl;
 cout<<"\n"<<endl;

 if (p<50000)
 { cout<<"\t==========================================\t\n "<<endl;
   cout<<"\t             HALAL MAKMUR JAYA \t\n"<<endl;
   cout<<"\tMaaf "<<pemb<<", Anda tidak mendapat potongan\t\n"<<endl;
   cout<<"\t          Harga Total  : "<<p<<"\t\n"<<endl;
   cout<<"\t            Pembeli    : "<<pemb<<"\t\n"<<endl;
   cout<<"\t             Kasir     : "<<kasir<<"\t\n"<<endl;
   cout<<"\tPembelian di atas 50.000 akan mendapatkan potongan\t\n"<<endl;
   cout<<"\t     Tingkatkan lagi pembelian Anda\t\n"<<endl;
   cout<<"\t      Terima Kasih telah berbelanja\t\n"<<endl;
   cout<<"\t         Datang lagi yaaa.... :)\t\n"<<endl;
   cout<<"\t==========================================\t\n "<<endl;}
 if (p>=50000)
 { q=0.2*p;
   r=p-q;
   cout<<"\t==========================================\t\n "<<endl;
   cout<<"\t               HALAL MAKMUR JAYA \t\n"<<endl;
   cout<<"\t              SELAMAT "<<pemb<<" !!!!!  \t\n"<<endl;
   cout<<"\t   Anda mendapatkan potongan sebesar 20%\t\n"<<endl;
   cout<<"\t          Harga Total  : "<<p<<"\t\n"<<endl;
   cout<<"\t            Potongan   : "<<q<<"\t\n"<<endl;
   cout<<"\tHarga setelah dipotong : "<<r<<"\t\n"<<endl;
   cout<<"\t            Pembeli    : "<<pemb<<"\t\n"<<endl;
   cout<<"\t             Kasir     : "<<kasir<<"\t\n"<<endl;
   cout<<"\t     Terima Kasih telah berbelanja\t\n"<<endl;
   cout<<"\t         Datang lagi yaaa.... :)\t\n"<<endl;
   cout<<"\t==========================================\t\n "<<endl;}
   getch();

   system ("pause");
}
