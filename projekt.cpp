#include <iostream>
using namespace std;

int silnia(int n) {
    if (n <= 1) return 1;
    return n * silnia(n - 1);
}


int main() {
    int liczba;
    cout << "Podaj liczbę do obliczenia silni: ";
    cin >> liczba;   
    cout << "Silnia wynosi: " << silnia(liczba) << endl;
    return 0;
}
