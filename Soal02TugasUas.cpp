#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int jumlah_motor, jumlah_mobil;
    int jam_masuk, jam_keluar;
    int durasi_parkir;
    int biaya_motor_perjam = 2000;
    int biaya_mobil_perjam = 5000;
    long long total_biaya_motor, total_biaya_mobil, total_pendapatan;

    cout << "===== PROGRAM HITUNG BIAYA PARKIR UNISBA =====" << endl;
    cout << endl;

    // Input data
    cout << "Masukkan jumlah motor: ";
    cin >> jumlah_motor;

    cout << "Masukkan jumlah mobil: ";
    cin >> jumlah_mobil;

    cout << "Masukkan jam masuk (0-23): ";
    cin >> jam_masuk;

    cout << "Masukkan jam keluar (0-23): ";
    cin >> jam_keluar;

    cout << endl;

    // Menghitung durasi parkir
    if (jam_keluar > jam_masuk) {
        durasi_parkir = jam_keluar - jam_masuk;
    }
    else {
        // Jika jam keluar lebih kecil, berarti keesokan harinya
        durasi_parkir = (24 - jam_masuk) + jam_keluar;
    }

    // Menghitung total biaya
    total_biaya_motor = (long long)jumlah_motor * durasi_parkir * biaya_motor_perjam;
    total_biaya_mobil = (long long)jumlah_mobil * durasi_parkir * biaya_mobil_perjam;
    total_pendapatan = total_biaya_motor + total_biaya_mobil;

    // Menampilkan hasil
    cout << "===== HASIL PERHITUNGAN =====" << endl;
    cout << "Jumlah motor: " << jumlah_motor << endl;
    cout << "Jumlah mobil: " << jumlah_mobil << endl;
    cout << "Jam masuk: " << jam_masuk << ":00" << endl;
    cout << "Jam keluar: " << jam_keluar << ":00" << endl;
    cout << "Durasi parkir: " << durasi_parkir << " jam" << endl;
    cout << endl;

    cout << "Biaya motor (" << jumlah_motor << " x " << durasi_parkir
        << " jam x Rp " << biaya_motor_perjam << "): Rp " << total_biaya_motor << endl;
    cout << "Biaya mobil (" << jumlah_mobil << " x " << durasi_parkir
        << " jam x Rp " << biaya_mobil_perjam << "): Rp " << total_biaya_mobil << endl;
    cout << endl;
    cout << "TOTAL PENDAPATAN: Rp " << total_pendapatan << endl;

    return 0;
}