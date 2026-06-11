#include <iostream>
#include <fstream>

using namespace std;

// const int MAX_QUEUE = 20;
// // #define array 100 

// struct Queue{
//     int depan;
//     int belakang;
//     int data[MAX_QUEUE];
// } queue;

// void inisialisasi();
// void login();
// void registrasi();
// void mainMenu();
// void enqueue(int data);
// void dequeue();
// void clear();
// bool isEmpty();
// bool isFull();
// void print();
void menuRegWarga();
void menuRegPetugas();
void regWarga();
void regPetugas();
void loginWarga();
void loginPetugas();
void MMWarga();
void MMPetugas();

int main(){
    int pilihMenu;
    system("clear");
    do{
        cout << ">>> LOGIN SEBAGAI PETUGAS ATAU WARGA <<<" << endl;
        cout << "1. WARGA" << endl;
        cout << "2. PETUGAS PEMBERSIHAN" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan anda: "; cin >> pilihMenu;

        switch(pilihMenu){
            case 1:
            menuRegWarga();
            break;
            case 2:
            menuRegPetugas();
            break;
            case 3:
            break;
            default:
            cout << "Pilihan tidak sesuai !!!" << endl;
            break;
        }
    }while(pilihMenu != 3);
    
    return 0;
}

//menu registrasi warga
void menuRegWarga(){
    int opsi;
    system("clear");
    cin.ignore();
    do{
    cout << ">>> Registarsi/Login sebagai Warga <<<" << endl;
    cout << "1. Login" << endl;
    cout << "2. Registrasi" << endl;
    cout << "3. Kembali ke sebelumnya" << endl;
    cout << "Masukkan pilihan anda: "; cin >> opsi;
    switch(opsi){
        case 1:
        loginWarga();
        break;
        case 2:
	    regWarga();
        break;
        case 3:
        main();
        break;
        default:
        cout << "Pilihan tidak sesuai !!!" << endl;
        break;
    }
    }while(opsi != 3);
}

//menu reguistrasi petugas pembersihan
void menuRegPetugas(){
    int opsi;
    system("clear");
    cin.ignore();
    do{
    cout << ">>> Registarsi/Login sebagai Petugas Pembersihan <<<" << endl;
    cout << "1. Login" << endl;
    cout << "2. Registrasi" << endl;
    cout << "3. Kembali ke sebelumnya" << endl;
    cout << "Masukkan pilihan anda: "; cin >> opsi;
    switch(opsi){
        case 1:
        loginPetugas();
        break;
        case 2:
	    regPetugas();
        break;
        case 3:
        main();
        break;
        default:
        cout << "Pilihan tidak sesuai !!!" << endl;
        break;
    }
    }while(opsi != 3);
}


//registrasi form warga
void regWarga(){
    string rusername, rpassword, runame, rpasswd;
    system("clear");
    cin.ignore();
    cout << ">>> REGISTRASI FORM SEBAGAI WARGA <<<" << endl;
    cout << "Masukkan Username dan Password" << endl << endl;
    cout << "Username : "; getline(cin, rusername);
    cout << "Password : "; getline(cin, rpassword);

    ofstream f1("fWarga.txt", ios::app);
    f1 << rusername << " " << rpassword << endl;
    f1.close();
    system("clear");
    cout << "Registrasi berhasil !!!" << endl;
    main(); 
}

//registrasi form petugas
void regPetugas(){
    string rusername, rpassword, runame, rpasswd;
    system("clear");
    cin.ignore();
    cout << ">>> REGISTRASI FORM SEBAGAI PETUGAS PEMBERSIHAN <<<" << endl;
    cout << "Masukkan Username dan Password" << endl << endl;
    cout << "Username : "; getline(cin, rusername);
    cout << "Password : "; getline(cin, rpassword);

    ofstream f1("fPetugas.txt", ios::app);
    f1 << rusername << " " << rpassword << endl;
    f1.close();
    system("clear");
    cout << "Registrasi berhasil !!!" << endl;
    main(); 
}

//login form warga
void loginWarga(){
    int isi;
    string username, password, uname, passwd;
    system("clear");
    cin.ignore();
    cout << ">>> LOGIN FORM SEBAGAI WARGA <<<" << endl;
    cout << "Masukkan Username dan Password" << endl << endl;
    cout << "Username : "; getline(cin, username);
    cout << "Password : "; getline(cin, password);
    ifstream input("fWarga.txt");

    while(input >> uname >> passwd){
        if(uname == username && passwd == password){
            isi = 1;
            system("clear");
        }
    }input.close();
    if(isi == 1){
        cout << username << " berhasil login" << endl;
        MMWarga();
    } else{
        cout << "Login gagal !!!" << endl;
        main();
    }
}

//login form petugas
void loginPetugas(){
    int isi;
    string username, password, uname, passwd;
    system("clear");
    cin.ignore();
    cout << ">>> LOGIN FORM SEBAGAI PETUGAS PEMBERSIHAN <<<" << endl;
    cout << "Masukkan Username dan Password" << endl << endl;
    cout << "Username : "; getline(cin, username);
    cout << "Password : "; getline(cin, password);
    ifstream input("fPetugas.txt");

    while(input >> uname >> passwd){
        if(uname == username && passwd == password){
            isi = 1;
            system("clear");
        }
    }input.close();
    if(isi == 1){
        cout << username << " berhasil login" << endl;
        MMPetugas();
    } else{
        cout << "Login gagal !!!" << endl;
        main();
    }
}
//menu utama warga
void MMWarga(){
    int opsi;
    do{
    cout << ">>> MENU UTAMA SEBAGAI WARGA <<<" << endl;
    cout << "1. MENU PETUGAS WARGA" << endl;
    cout << "2. MENU PETUGAS WARGA" << endl;
    cout << "3. MENU PETUGAS WARGA" << endl;
    cout << "Masukkan pilihan anda: "; cin >> opsi;
    switch(opsi){
        case 3:
        break;
        default:
        cout << "Pilihan tidak sesuai !!!" << endl;
        break;
    }
    }while(opsi != 3);
}

//menu utama petugas
void MMPetugas(){
    int opsi;
    do{
    cout << ">>> MENU UTAMA SEBAGAI PETUGAS PEMBERSIHAN <<<" << endl;
    cout << "1. MENU PETUGAS PEMBERSIHAN" << endl;
    cout << "2. MENU PETUGAS PEMBERSIHAN" << endl;
    cout << "3. MENU PETUGAS PEMBERSIHAN" << endl;
    cout << "Masukkan pilihan anda: "; cin >> opsi;
    switch(opsi){
        case 3:
        break;
        default:
        cout << "Pilihan tidak sesuai !!!" << endl;
        break;
    }
    }while(opsi != 3);
}

// void inisialisasi(){
//     queue.depan = queue.belakang = -1;
// }
// void enqueue(int data){
//     queue.depan = 0;
//     queue.belakang++;
//     cin.ignore();
//     cout << "Masukkan data: "; cin >> data;
//     queue.data[queue.belakang] = data;
// }

// void dequeue(){
//     cout << "";
// }9
