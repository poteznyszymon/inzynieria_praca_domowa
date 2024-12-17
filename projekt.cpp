#include <iostream>
using namespace std;

bool czyPierwsza(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int silnia(int n) {
    if (n <= 1) return 1;
    return n * silnia(n - 1);
}

int main() {
    int liczba;

    cout << "Podaj liczbę do obliczenia silni: ";
    cin >> liczba;
    cout << "Silnia wynosi: " << silnia(liczba) << endl;

    cout << "Podaj liczbę do sprawdzenia: ";
    cin >> liczba;
    if (czyPierwsza(liczba))
        cout << "Liczba jest pierwsza" << endl;
    else
        cout << "Liczba nie jest pierwsza" << endl;

    return 0;
}
