#include<stdio.h>
int main()
{
    // KHai bao bien
	int number;
	while(1){
		printf("Nhap mot so  bat ki : ");
		scanf("%d", &number);
	// Kiem tra dieu kien
		if(number==25){
			break;
		}
		else{
			printf("Nhap lai so khac\n" );
		}
	}
	end:
	return 0;
}
