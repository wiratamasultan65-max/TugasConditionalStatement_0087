#include <iostream>
using namespace std;                //Membuat Library

// Prosedur untuk memasukkan data
void inputData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan status BMI
string statusBMI(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    } else if (bmi < 25) {
        return "Berat Badan Normal";
    } else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } else {
        return "Obesitas";
    }
}


int main() {
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas B 2025 ---" << endl;

    // Memanggil prosedur input
    inputData(berat, tinggi);

    // Menghitung BMI
    bmi = hitungBMI(berat, tinggi);

    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << statusBMI(bmi) << endl;

    return 0;
}

// Program Di atas bisa dijalankan
