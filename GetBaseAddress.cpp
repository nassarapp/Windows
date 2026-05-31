#include <windows.h>
#include <stdio.h>

int main() {
    HMODULE hModule = GetModuleHandleA("kernel32.dll");
    if (hModule != NULL) {
        printf("Base address of kernel32.dll: %p\n", (void*)hModule);
    } else {
        printf("GetModuleHandle failed. Error: %lu\n", GetLastError());
    }
    return 0;
}
