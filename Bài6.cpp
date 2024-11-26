#include <stdio.h>
int main() 
{
	// Khai bao bien
    int a, b, choice;
    do {
        printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
    // Dieu kien cua cac lua chon
		switch (choice) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                printf("Tong cua %d va %d la: %d\n", a, b, a + b);
                break;
            case 2:
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                printf("Hieu cua %d va %d la: %d\n", a, b, a - b);
                break;
            case 3:
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                printf("Tich cua %d va %d la: %d\n", a, b, a * b);
                break;
            case 4:
                printf("Nhap so thu nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu hai: ");
                scanf("%d", &b);
                if (b == 0) {
                    printf("Loi: Không the chia cho 0!\n");
                } else {
                    printf("Thuong cua %d va %d la: %.2f\n", a, b, (float)a / b);
                }
                break;
            case 5:
                printf("Chuong trinh ket thuc!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 5);
    return 0;
}
