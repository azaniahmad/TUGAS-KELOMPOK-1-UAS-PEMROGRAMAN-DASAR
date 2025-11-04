#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int golongan;
    int jamKerja;
    int tarifPerJam = 0;

    cout << "====== PROGRAM PERHITUNGAN GAJI YOROKU CORP ======" << endl;
    cout << endl;

    // Input data karyawan
    cout << "Masukkan nama karyawan: ";
    getline(cin, nama);

    cout << "Masukkan golongan kerja (1/2/3): ";
    cin >> golongan;

    cout << "Masukkan jam kerja per minggu: ";
    cin >> jamKerja;

    cout << endl;

    // Validasi dan tentukan tarif berdasarkan golongan
    if (golongan == 1) {
        tarifPerJam = 25000;
    }
    else if (golongan == 2) {
        tarifPerJam = 35000;
    }
    else if (golongan == 3) {
        tarifPerJam = 50000;
    }
    else {
        cout << "Golongan tidak valid!" << endl;
        return 1;
    }

    // Hitung upah dasar
    int upahDasar = jamKerja * tarifPerJam;

    // Hitung uang lembur
    int uangLembur = 0;
    if (jamKerja > 48) {
        int jamLembur = jamKerja - 48;
        uangLembur = jamLembur * 10000;
    }

    // Total gaji
    int totalGaji = upahDasar + uangLembur;

    // Tampilkan hasil
    cout << "====== DETAIL PERHITUNGAN GAJI ======" << endl;
    cout << "Nama Karyawan      : " << nama << endl;
    cout << "Golongan           : " << golongan << endl;
    cout << "Tarif per Jam      : Rp " << tarifPerJam << ",-" << endl;
    cout << "Jam Kerja          : " << jamKerja << " jam" << endl;
    cout << endl;
    cout << "Upah Dasar         : Rp " << upahDasar << ",-" << endl;

    if (jamKerja > 48) {
        cout << "Jam Lembur         : " << (jamKerja - 48) << " jam" << endl;
        cout << "Uang Lembur        : Rp " << uangLembur << ",-" << endl;
    }
    else {
        cout << "Jam Lembur         : 0 jam" << endl;
        cout << "Uang Lembur        : Rp 0,-" << endl;
    }

    cout << endl;
    cout << "TOTAL GAJI MINGGUAN: Rp " << totalGaji << ",-" << endl;
    cout << "====================================" << endl;

    return 0;
}