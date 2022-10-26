#include "syscall.h"
#define SIZE (100)

int main() {
    int a[SIZE + 1];
    int n , order, temp, i, j;
    do {
        PrintString("Nhap n (0 <= n <= 100): ");
        n = ReadNum();
        if (n < 0 || n > 100)
            PrintString(
                "n phai la SO NGUYEN (0 <= n <= 100)\n");
    } while (n < 0 || n > 100);

    for (i = 0; i < n; i++) {
        PrintString("Nhap so a[");
        PrintNum(i);
        PrintString("]: ");
        a[i] = ReadNum();
    }

    do {
        PrintString("Chon kieu Sort (1: Tang Dan, 2: Giam Dan): ");
        order = ReadNum();
        if (order != 1 && order != 2)
            PrintString("Khong hop le\n");
    } while (order != 1 && order != 2);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (order == 1) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            } else if (order == 2) {
                if (a[j] < a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    PrintString("Day da duoc Sort: ");
    for (i = 0; i < n; i++) {
        PrintNum(a[i]);
        PrintChar(' ');
    }
    PrintChar('\n');
}
