# Assignment 03 - Arrays & Algorithm Analysis

## NAMA : Maihana Syarifa Putri

## NIM : 24/545568/TK/60700

## Deskripsi Solusi

### Problem 1 – Algorithm Analysis
Pada soal ini dilakukan analisis langkah demi langkah terhadap tiga potongan kode (Snippet A, B, dan C).
Untuk setiap kode dihitung jumlah operasi secara tepat T(n) dengan memberikan biaya operasi pada setiap baris.
Kemudian hasilnya disederhanakan menjadi notasi Big-O, serta dijelaskan best case dan worst case dari masing-masing algoritma.

### Problem 2 - Implementasi DynArray
Program ini mengimplementasikan dynamic array (array dinamis) menggunakan struct dan fungsi prosedural tanpa menggunakan class, template, atau std::vector.
Fungsi yang diimplementasikan:

**initArray()**
Menginisialisasi array dengan kapasitas awal 2 dan ukuran 0.

**freeArray()**
Membebaskan memori yang dialokasikan dan mereset ukuran serta kapasitas menjadi 0.

**pushBack()**
Menambahkan elemen ke akhir array. Jika ukuran sudah sama dengan kapasitas, maka kapasitas akan dilipatgandakan (double).

**insertAt()**
Menyisipkan elemen pada indeks tertentu dengan menggeser elemen setelahnya ke kanan.

**removeAt()**
Menghapus elemen pada indeks tertentu dan menggeser elemen setelahnya ke kiri.

**getAt()**
Mengambil nilai elemen pada indeks tertentu.

**setAt()**
Mengubah nilai elemen pada indeks tertentu.

**printDynArr()**
Menampilkan isi array dalam format:
[10, 20, 30] (size=3, cap=4)

### Problem 3 – Linear Search vs Binary Search
Program ini mengimplementasikan dua algoritma pencarian:

- **linearSearch()**
Mencari elemen secara berurutan dari awal hingga akhir array.

- **binarySearch()**
Menggunakan metode binary search secara iteratif pada array yang sudah terurut.

- **generateSortedArray()**
Membuat array terurut berisi bilangan berbeda.

Program melakukan pengujian pada ukuran array:

- n = 10

- n = 100

- n = 1000

Pengujian dilakukan dengan mencari:

- nilai yang ada dalam array (elemen tengah)

- nilai yang tidak ada dalam array

Hasil indeks yang dikembalikan oleh kedua algoritma kemudian ditampilkan untuk memastikan hasilnya benar.

### Problem 4 – Amortized Analysis
Pada soal ini dianalisis biaya amortized dari operasi pushBack pada dynamic array.

Analisis meliputi:

- Menelusuri 12 operasi pushBack

- Menghitung total biaya operasi

- Menghitung rata-rata biaya per operasi

- Membandingkan strategi doubling capacity dengan strategi penambahan kapasitas tetap (fixed increment)

Hasil analisis menunjukkan bahwa:

- Strategi doubling memiliki total biaya O(n) sehingga amortized cost per operasi O(1).

- Strategi fixed increment memiliki total biaya O(n²) sehingga kurang efisien.

## Perintah Kompilasi
Semua program dikompilasi menggunakan standar C++17 sesuai instruksi tugas.

**Kompilasi problem2.cpp:**

g++ -std=c++17 -Wall -Wextra problem2.cpp -o problem2

**Kompilasi problem3.cpp:**

g++ -std=c++17 -Wall -Wextra problem3.cpp -o problem3

**Menjalankan program:**

./problem2

./problem3

## Kendala atau Keterbatasan
- Program mengasumsikan bahwa indeks yang diberikan pada fungsi seperti insertAt, removeAt, getAt, dan setAt selalu valid sesuai asumsi soal.

- Tidak terdapat pengecekan error untuk indeks yang tidak valid.

- Binary search hanya bekerja dengan benar jika array dalam keadaan terurut.

## Waktu Pengerjaan 
Perkiraan waktu yang digunakan untuk menyelesaikan tugas ini kurang lebih sekitar 4 hari, termasuk implementasi kode, pengujian program, dan penulisan analisis.
