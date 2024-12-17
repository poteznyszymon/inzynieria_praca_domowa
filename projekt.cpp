#include <iostream>
using namespace std;

int silnia(int n) {
    if (n <= 1) return 1;
    return n * silnia(n - 1);
}


int main() {
    cout << "Projekt 1 - Menu Główne" << endl;
    return 0;
}
