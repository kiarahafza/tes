# Algoritma dan Struktur Data - Assignment 03: Arrays & Algorithm Analysis

## Name
Kiara Hafza Maharani

## Student ID
24/544064/TK/60472

## Brief Description of Each Solution
### Problem 1 (Written PDF)
Analisis algoritma untuk tiga code snippet (A, B, dan C), mencakup perhitungan exact operation count T(n), klasifikasi Big-O, serta penjelasan best case dan worst case untuk masing-masing snippet.
### Problem 2
Implementasi resizable array menggunakan struct DynArray dan free functions, dengan operasi pushBack, insertAt, removeAt, getAt, setAt, dan printDynArr. 
Kapasitas array otomatis bertambah dua kali lipat ketika penuh (strategi doubling).
### Problem 3
Implementasi linear search dan binary search untuk membandingkan performa kedua algoritma. Pengujian dilakukan pada array berukuran n = 10, 100, dan 1000 untuk nilai yang ada maupun tidak ada dalam array. Hasilnya kemudian dibandingkan, dan analisis kompleksitas serta penentuan minimum n disertakan di PDF.
### Problem 4 (Written PDF)
Amortized analysis dari fungsi pushBack, mencakup trace 12 call berturut-turut, perhitungan total cost, dan perbandingan strategi doubling vs fixed increment.

## Compilation Commands
### problem2.cpp
```bash
g++ -std=c++17 -Wall -Wextra -g -fsanitize=address -o problem2 problem2.cpp
```
### problem3.cpp
```bash
g++ -std=c++17 -Wall -Wextra -g -fsanitize=address -o problem3 problem3.cpp
```

## Known Issues / Limitations
- problem2.cpp dan problem3.cpp berhasil dikompilasi tanpa warnings maupun memory leaks.
- Limitasi Problem 2: fungsi insertAt dan removeAt mengasumsikan bahwa index yang diberikan selalu berada dalam batas ukuran array. Fungsi getAt mengembalikan -1 sebagai penanganan error sederhana jika index tidak valid.
- Limitasi Problem 3: fungsi binarySearch hanya bekerja dengan benar pada array yang sudah terurut. Jika digunakan pada array yang tidak terurut, hasil pencarian tidak dapat dijamin benar.

## Time Spent
Sekitar 10-12 jam untuk analisis, implementasi kode, testing, dan penulisan jawaban.
