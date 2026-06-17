#include <windows.h>
#include <iostream>

/*

First refer the coursework for this program

Compilation instructions :
x86_64-w64-mingw32-g++ crash_generator.cpp -o crash_generator.exe -O0 -g -static

*/

void CauseCrash() {
    std::cout << "[-] Executing CauseCrash() function..." << std::endl;
    
    // Intentionally writing to a null pointer to trigger a fatal Access Violation
    int* badPointer = nullptr;
    *badPointer = 42; 
}

int main() {
    std::cout << "[*] Chapter 8: Post-Mortem Debugging (Crash Dumps)" << std::endl;
    std::cout << "[*] We are about to intentionally crash this process." << std::endl;
    std::cout << "[*] PAUSED. Do not press Enter yet." << std::endl;
    std::cout << "[*] We need to attach ProcDump to catch the crash." << std::endl;
    std::cin.get();
    
    CauseCrash();
    
    // The program will never reach this point
    std::cout << "[+] Execution completed safely." << std::endl;
    return 0;
}