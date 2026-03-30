#include <iostream>
using namespace std;

// Variabel global
int angka;
int pilihan;

// Function untuk cek bilangan prima
bool isPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function untuk cek bilangan Fibonacci
bool isFibonacci(int n) {
    int a = 0, b = 1, c = 0;

    while (c <= n) {
        if (c == n) {
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

// Prosedur input angka
void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

// Prosedur tampil hasil prima
void tampilHasilPrima() {
    if (isPrima(angka)) {
        cout << angka << " adalah bilangan prima.\n";
    } else {
        cout << angka << " bukan bilangan prima.\n";
    }
}

// Prosedur tampil hasil fibonacci
void tampilHasilFibonacci() {
    if (isFibonacci(angka)) {
        cout << angka << " termasuk bilangan Fibonacci.\n";
    } else {
        cout << angka << " bukan bilangan Fibonacci.\n";
    }
}

// Function menu
void menu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}

// Main program
int main() {
    while (true) {
  menu();
        cin >> pilihan;

        