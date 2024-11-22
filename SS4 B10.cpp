#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Yeu cau nguoi dung nhap vao 3 so nguyen
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);
    printf("Nhap vao so thu ba: ");
    scanf("%d", &c);

    // Sap xep cac so theo thu tu tu nho den lon
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // In cac so ra man hinh
    printf("Thu tu tang dan: %d %d %d\n", a, b, c);

    return 0;
}

