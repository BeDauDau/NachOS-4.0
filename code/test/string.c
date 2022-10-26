#include "syscall.h"
char a[256];
int main() {
    PrintString("Do dai cua chuoi: (<= 255):");
    ReadString(a, ReadNum());
    PrintString("Chuoi xuat ra: \n");
    PrintString(a);
    PrintString("\n");
}
