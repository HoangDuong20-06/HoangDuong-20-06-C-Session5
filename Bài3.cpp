#include<stdio.h>
int main()
{
	// Khai bao cac bien
	int number,sum,i;
	// Nhap 1 so nguyen duong tu ban phim
	printf("Nhap mot so duong bat ki : ");
	scanf("%d", &number);
	// Dieu kien 
	for (i = 1;i<=number;i++){
		sum = sum + i ;
		printf("Tong cua cac so la: %d\n", sum);
	}
   return 0;	
}
