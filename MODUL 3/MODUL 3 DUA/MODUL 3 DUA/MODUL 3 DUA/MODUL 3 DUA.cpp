#include <stdio.h>
#include <conio.h>
int i,N;
int main()
{
	printf("Mencetak deret bilangan ganjil dari anggota 1 s/d N\n");
	printf("Berapa N?:");scanf("%d",&N);
	for(i=1;i<N;i++){
		if(i%2!=0)
			printf("%d",i);
	}
	getch();
}