#include <stdio.h>
int main() 
{
	// Khai bao bien
    int a, b, c, choice;
    do {
        printf("MENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
    // Dieu kien cua cac lua chon
		switch (choice) {
			default:
                printf("Lua chon khong hop le!\n");
                break;
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                printf("Nhap so thu ba: ");
                scanf("%d", &c);
                break;
            case 2:
                printf("Tong cua %d + %d + %d = %d\n", a, b, c, a + b + c);
                break;
            case 3:
                printf("Trung binh cong cua (%d + %d + %d)/3 = %d\n", a, b, c, (a + b + c)/3);
                break;
            case 4:
                if (a < b && a < c) {
                    printf("So nho nhat la: %d\n", a);
                } else if(b < a && b < c) {
                    printf("So nho nhat la: %d\n", b);
                } else if (c < a && c < b) {
                	printf("So nho nhat la: %d\n", c);
				}
                break;
            case 5:
            	if (a > b && a > c) {
                    printf("So lon nhat la: %d\n", a);
                } else if(b > a && b > c) {
                    printf("So lon nhat la: %d\n", b);
                } else if (c > a && c > b) {
                	printf("So lon nhat la: %d\n", c);
				}
				break;
            case 6:
                printf("Chuong trinh ket thuc!\n");
                break;
        }
    } while (choice != 6);
    return 0;
}
