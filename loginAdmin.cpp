#include <iostream>

using namespace std;

int main() {
    string username, password;
    char hari;

    cout << "Username: ";
    cin >> username;

    if (username == "admin") {
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

    cout << "Masukkan Nomor Hari: ";
    cin >> hari;
    cout << "Adalah Hari: "; 

    switch (hari){
        case '1':
        cout << "Senin";
        break;
        case '2':
        cout << "Selasa";
        break;
        case '3':
        cout << "Rabu";
        break;
        case '4':
        cout << "Kamis";
        break;
        case '5':
        cout << "Jumat";
        break;
        case '6':
        cout << "Sabtu";
        break;
        case '7':
        cout << "Minggu";
        break;
        default:
        cout << "Pilihan Salah!";
    }

    cout << endl;
}