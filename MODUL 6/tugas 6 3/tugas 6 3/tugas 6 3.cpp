#include <iostream>
using namespace std;

int fibonacci(int n){
	if(n==0||n==1){
		return n;
	}else{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
int main()
{
	int n, i, j=1;
	cout<<"Masukkab batas jumlah bilangan fibonacci:";
	cin>>n;

	cout<<"Hasil bilangan fibonacci:\n";
	for(i=1;i<=n;i++){
		cout<<"Fibonacci ke-"<<i<<":"<<fibonacci(j)<<endl;
		j++;
	}
	return 0;
}