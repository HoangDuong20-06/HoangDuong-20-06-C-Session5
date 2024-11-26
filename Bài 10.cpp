#include<stdio.h>
int main()
{
    int num;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    printf("Cac chu so cua so da nhap la: ");
    // Kiem tra xem so co am khong
    if (num < 0) {
        num = -num;
    }
    // Neu so dc nhap la 0, in ngay so 0
    if (num == 0) {
        printf("0\n");
    } else 
    while (num > 0) {
        int digit = num % 10; // Lay chu so hang don vi
        printf("%d ", digit);
        num /= 10; // Loai bo chu so hàng don vi
    }
    return 0;

}
