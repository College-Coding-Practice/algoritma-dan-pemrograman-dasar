#include "iostream"
#include "iostream"
#include "conio.h"
#include "string.h"
#include "stdio.h"
using namespace std ;

void main()
{
 char kasir[10], salesm[20];
 int p, q, r;


 cout<<"\t==========================================\t\n "<<endl;
 cout<<"\t              Selamat datang di \t\n"<<endl;
 cout<<"\t           SEJAHTERA HALAL SENTOSA\t\n "<<endl;
 cout<<"\n"<<endl;
 cout<<"\t              Selamat Berbelanja \t\n"<<endl;
 cout<<"\t==========================================\t\n "<<endl;
 cout<<"\t         nama kasir : \t"<<endl;
 gets(kasir);
 cout<<"\t         salesman    : \t"<<endl;
 gets(salesm);
 cout<<"\t      Total Harga   : \t"<<endl;
 cin>>p;
 cout<<"\n"<<endl;
 cout<<"\t==========================================\t\n "<<endl;
 cout<<"\n"<<endl;

 if (p<=20000)
 { q=0.10*p;
   r=p-q;
   cout<<"\t==========================================\t\n "<<endl;
   cout<<"\t             SEJAHTERA HALAL SENTOSA \t\n"<<endl;
   cout<<"\t            SELAMAT "<<salesm<<" !!!!!  \t\n"<<endl;
   cout<<"\t   Anda mendapatkan komisi 10% dan uang jasa 10000\t\n"<<endl;
   cout<<"\t          Harga Total  : "<<p<<"\t\n"<<endl;
   cout<<"\t            Potongan   : "<<q<<"\t\n"<<endl;
   cout<<"\t            Salesm    : "<<salesm<<"\t\n"<<endl;
   cout<<"\t             Kasir     : "<<kasir<<"\t\n"<<endl;
   cout<<"\tPenjualan di atas 20.000 akan mendapatkan komisi\t\n"<<endl;
   cout<<"\t     Tingkatkan lagi penjualan Anda\t\n"<<endl;
   cout<<"\t      Terima Kasih telah berbelanja\t\n"<<endl;
   cout<<"\t         Datang lagi yaaa.... :)\t\n"<<endl;
   cout<<"\t==========================================\t\n "<<endl;}
 if (p>20000)
 { q=0.15*p;
   r=p-q;
   cout<<"\t==========================================\t\n "<<endl;
   cout<<"\t               SEJAHTERA HALAL SENTOSA \t\n"<<endl;
   cout<<"\t              SELAMAT "<<salesm<<" !!!!!  \t\n"<<endl;
   cout<<"\t   Anda mendapatkan komisi 15% dan uang jasa 20000\t\n"<<endl;
   cout<<"\t          Harga Total  : "<<p<<"\t\n"<<endl;
   cout<<"\t            Potongan   : "<<q<<"\t\n"<<endl;
   cout<<"\t            Salesm    : "<<salesm<<"\t\n"<<endl;
   cout<<"\t             Kasir     : "<<kasir<<"\t\n"<<endl;
   cout<<"\tPenjualan di atas 20.000 akan mendapatkan komisi\t\n"<<endl;
   cout<<"\t     Tingkatkan lagi penjualan Anda\t\n"<<endl;
   cout<<"\t     Terima Kasih telah berbelanja\t\n"<<endl;
   cout<<"\t         Datang lagi yaaa.... :)\t\n"<<endl;
   cout<<"\t==========================================\t\n "<<endl;}
 if (p>50000)
 { q=0.20*p;
   r=p-q;
   cout<<"\t==========================================\t\n "<<endl;
   cout<<"\t               SEJAHTERA HALAL SENTOSA \t\n"<<endl;
   cout<<"\t              SELAMAT "<<salesm<<" !!!!!  \t\n"<<endl;
   cout<<"\t   Anda mendapatkan komisi 20% dan uang jasa 30000\t\n"<<endl;
   cout<<"\t          Harga Total  : "<<p<<"\t\n"<<endl;
   cout<<"\t            Potongan   : "<<q<<"\t\n"<<endl;
   cout<<"\t            Salesm     : "<<salesm<<"\t\n"<<endl;
   cout<<"\t             Kasir     : "<<kasir<<"\t\n"<<endl;
   cout<<"\tPenjualan di atas 20.000 akan mendapatkan komisi\t\n"<<endl;
   cout<<"\t     Tingkatkan lagi penjualan Anda\t\n"<<endl;
   cout<<"\t     Terima Kasih telah berbelanja\t\n"<<endl;
   cout<<"\t         Datang lagi yaaa.... :)\t\n"<<endl;
   cout<<"\t==========================================\t\n "<<endl;}
   getch();

   system ("pause");
}
