# TUGAS-KELOMPOK-1-UAS-PEMROGRAMAN-DASAR

Repositori ini berisi kumpulan program C++ yang dikerjakan sebagai tugas UAS Pemrograman Dasar. Project ini mendemonstrasikan konsep-konsep fundamental pemrograman seperti variabel, kondisional, input/output, dan logika perhitungan.

## Anggota Tim

1. Imam Sasmito Tafaqquh (25104410066)
2. M. Krisna Yodi (25104410083)
3. Dafa Okan (25104410047)
4. Chocky Dimas Ardian (25104410045)
5. Falik Fabio Aulia (25104410030)

## Fitur Utama

### 1. Program Perhitungan Gaji (Soal1TugasUas.cpp)

Program ini menghitung total gaji mingguan karyawan berdasarkan golongan kerja dan jam kerja yang dilakukan.

**Fitur:**
- Input nama karyawan, golongan kerja (1/2/3), dan jam kerja per minggu
- Perhitungan upah dasar sesuai dengan tarif per jam berdasarkan golongan
- Perhitungan uang lembur untuk jam kerja di atas 48 jam per minggu
- Tampilan detail perhitungan gaji secara terperinci

**Tarif Per Jam:**
- Golongan 1: Rp 25.000,-
- Golongan 2: Rp 35.000,-
- Golongan 3: Rp 50.000,-

**Uang Lembur:**
- Rp 10.000,- per jam (untuk jam kerja di atas 48 jam)

### 2. Program Perhitungan Biaya Parkir (Soal02TugasUas.cpp)

Program ini menghitung total pendapatan parkir untuk universitas berdasarkan jumlah kendaraan dan durasi parkir.

**Fitur:**
- Input jumlah motor, jumlah mobil, jam masuk, dan jam keluar
- Perhitungan otomatis durasi parkir (mendukung parkir lintas hari)
- Perhitungan total biaya untuk motor dan mobil secara terpisah
- Tampilan hasil perhitungan dengan breakdown detail

**Tarif Parkir:**
- Motor: Rp 2.000,- per jam
- Mobil: Rp 5.000,- per jam

## Teknologi

- **Bahasa Pemrograman:** C++ (C++11 atau lebih tinggi)
- **Compiler:** GCC, Clang, atau Microsoft Visual C++
- **Library Standar:** iostream, string

## Prasyarat Instalasi

Sebelum menjalankan program, pastikan Anda memiliki:

1. **Compiler C++** terinstal di sistem:
   - **Linux:** `sudo apt-get install build-essential` (untuk Ubuntu/Debian)
   - **macOS:** Xcode Command Line Tools
   - **Windows:** MinGW, Visual Studio, atau IDE lainnya

2. **Text Editor atau IDE** (opsional, untuk kenyamanan):
   - Visual Studio Code
   - Code::Blocks
   - Dev-C++
   - CLion

## Struktur Project

```
TUGAS-KELOMPOK-1-UAS-PEMROGRAMAN-DASAR/
├── README.md                  # Dokumentasi project
├── Soal1TugasUas.cpp         # Program perhitungan gaji
└── Soal02TugasUas.cpp        # Program perhitungan parkir
```

## Cara Menggunakan

### Kompilasi Program

Untuk mengompilasi program, gunakan perintah:

```bash
# Kompilasi Soal 1
g++ -o soal1 Soal1TugasUas.cpp

# Kompilasi Soal 2
g++ -o soal2 Soal02TugasUas.cpp
```

### Menjalankan Program

#### Program 1: Perhitungan Gaji

```bash
./soal1
```

**Contoh Input:**
```
Masukkan nama karyawan: Budi Santoso
Masukkan golongan kerja (1/2/3): 2
Masukkan jam kerja per minggu: 50
```

**Contoh Output:**
```
====== DETAIL PERHITUNGAN GAJI ======
Nama Karyawan      : Budi Santoso
Golongan           : 2
Tarif per Jam      : Rp 35000,-
Jam Kerja          : 50 jam

Upah Dasar         : Rp 1750000,-
Jam Lembur         : 2 jam
Uang Lembur        : Rp 20000,-

TOTAL GAJI MINGGUAN: Rp 1770000,-
====================================
```

#### Program 2: Perhitungan Biaya Parkir

```bash
./soal2
```

**Contoh Input:**
```
Masukkan jumlah motor: 15
Masukkan jumlah mobil: 8
Masukkan jam masuk (0-23): 8
Masukkan jam keluar (0-23): 17
```

**Contoh Output:**
```
===== HASIL PERHITUNGAN =====
Jumlah motor: 15
Jumlah mobil: 8
Jam masuk: 8:00
Jam keluar: 17:00
Durasi parkir: 9 jam

Biaya motor (15 x 9 jam x Rp 2000): Rp 270000
Biaya mobil (8 x 9 jam x Rp 5000): Rp 360000

TOTAL PENDAPATAN: Rp 630000
```

## Fitur Khusus

- **Validasi Input:** Program menvalidasi input golongan kerja pada Soal 1
- **Perhitungan Lintas Hari:** Soal 2 mendukung perhitungan parkir yang melampaui tengah malam
- **Format Currency:** Semua output finansial ditampilkan dalam format Rupiah dengan pemisah ribuan
- **User-Friendly Interface:** Tampilan menu yang jelas dan mudah dipahami

## Kontribusi

Kami terbuka terhadap saran dan perbaikan. Jika Anda ingin berkontribusi:

1. Fork repository ini
2. Buat branch feature baru (`git checkout -b feature/AmazingFeature`)
3. Commit perubahan Anda (`git commit -m 'Add some AmazingFeature'`)
4. Push ke branch (`git push origin feature/AmazingFeature`)
5. Buka Pull Request

Untuk melaporkan bug atau memberikan saran, silakan buka issue di repository ini.

## Catatan Pengembangan

- Program ini dibuat sebagai bagian dari tugas UAS Pemrograman Dasar
- Fokus pada implementasi logika dasar dan I/O dalam C++
- Dapat dikembangkan lebih lanjut dengan fitur penyimpanan data, GUI, atau database
---
