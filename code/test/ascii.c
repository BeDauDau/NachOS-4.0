#include "syscall.h"

int main() {
    int i;
    for (i = 32; i <= 126; i++) {
        PrintString("Gia tri cua ");
        PrintChar((char)i);
        PrintString(" la: ");
        PrintNum(i);      
        PrintString("\n");
    }
}
