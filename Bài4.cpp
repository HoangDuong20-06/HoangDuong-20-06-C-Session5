#include<stdio.h>
int main()
{
	// Khai bao bien
	int i ,j,tich;
	printf("Nhap mot so nguyen : ");
	scanf("%d", &i);
    // Dieu kien
	for (j=1;j<=10;j++){
		tich = i * j;
	    printf("%d x %d = %d\n",i,j,tich);
	}
	return 0;
}
