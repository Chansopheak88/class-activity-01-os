#include <windows.h>

int main() {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    char msg[] = "Hello from Windows system call!\n";
    DWORD written;

    WriteFile(hStdOut, msg, sizeof(msg) - 1, &written, NULL);
    return 0;
}
