#include <iostream>

using namespace std;

int main() {
    double sisiAlas, tinggiSelimut, luasAlas, luasSisiTegak, totalLuas;
    char pilihan; // Variabel untuk menyimpan pilihan (y/n)

    do {
        // Membersihkan layar (Opsional, agar tampilan rapi setiap pengulangan)
        // system("cls"); // Gunakan ini jika di Windows

        cout << "=== Program Hitung Luas Permukaan Limas Segiempat ===" << endl;

        // Input sisi alas
        cout << "Masukkan panjang sisi alas (cm): ";
        cin >> sisiAlas;

        // Input tinggi segitiga
        cout << "Masukkan tinggi segitiga sisi tegak (cm): ";
        cin >> tinggiSelimut;

        // Proses Hitung
        luasAlas = sisiAlas * sisiAlas;
        luasSisiTegak = 4 * (0.5 * sisiAlas * tinggiSelimut);
        totalLuas = luasAlas + luasSisiTegak;

        // Output Hasil
        cout << "---------------------------------------------------" << endl;
        cout << "Luas Alas          : " << luasAlas << " cm2" << endl;
        cout << "Total Luas Selimut : " << luasSisiTegak << " cm2" << endl;
        cout << "Luas Permukaan Limas adalah: " << totalLuas << " cm2" << endl;
        cout << "---------------------------------------------------" << endl;

        // Tanya user apakah ingin mengulang
        cout << "Apakah Anda ingin menghitung lagi? (y/n): ";
        cin >> pilihan;
        cout << endl;

    } while (pilihan == 'y' || pilihan == 'Y'); // Loop berlanjut jika input 'y' atau 'Y'

    cout << "Terima kasih telah menggunakan program ini!" << endl;

    return 0;
}