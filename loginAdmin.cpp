#include <iostream> // library c++ merakyat;

using namespace std; // pake ini kalo coutnya gak mau panjang;

int main() {
    string username, password, hari; // deklarasi variabel
    int pilihan;

    cout << "Username: "; // meminta user memasukkan data; 
    cin >> username;

    if (username == "admin") { // pengondisian if untuk login; 
        cout << "Password: ";
        cin >> password;
            if (password == "admin123") {
                cout << "Selamat Datang!\n\n";
            } else {
                cout << "Password Salah!";
            }
    } else {
        cout << "Username Tidak Terdaftar!";
    }

    cout << "Masukkan Angka Hari [1-7]: "; // meminta user untuk memasukkan angka hari;
    cin >> pilihan; 

    if (pilihan == 1) { // pengondisian if untuk pilihan hari;
        hari = "Senin";
    } else if (pilihan == 2 ) {
        hari = "Selasa";
    } else if (pilihan == 3 ) {
        hari = "Rabu";
    } else if (pilihan == 4) {
        hari = "Kamis";
    } else if (pilihan == 5) {
        hari = "Jumat";
    } else if (pilihan == 6 ) {
        hari = "Sabtu";
    } else if (pilihan == 7) {
        hari = "Minggu";
    } else {
        cout << "Pilihan Anda Tidak Tersedia!";
    }

    cout << "Hari ke-" << pilihan << " Adalah Hari " << hari << endl; // cetak hari-nya;
}