#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
	int nilai[20];
    int posisi[20];
    int i, n, bilangan, banyak=0;
    bool ketemu;

    cout << " \t \t \t \t ================================================ " << endl;
	cout << " \t \t \t \t PROGRAM ARRAY 1 DIMENSI DENGAN SISTEM PENCARIAN  " << endl;
	cout << " \t \t \t \t ================================================ " << endl << endl;

    cout << " \t \t \t \t Masukkan Banyaknya Bilangan = ";
    cin >> n;
    cout << endl;

    //Membaca Elemen Array
    for (i = 0; i < n; i++) {
        cout << " \t \t \t \t Masukkan Indeks ke- " << i << " = ";
        cin >> nilai[i];
        cout << endl;
    }

    //Mencetak Elemen Array
    cout << " \t \t \t \t Deretan Bilangan = ";
    for (i = 0; i < n; i++) {
		cout << nilai[i] << " ";
    }
	cout << endl;
	
	cout << endl;
    cout << " \t \t \t \t Masukkan Bilangan yang akan dicari = ";
    cin >> bilangan;
    cout << endl;

    //Melakukan Pencarian
    for (i = 0; i < n; i++) {
        if(nilai[i] == bilangan){
            ketemu = true;
            posisi[banyak] = i;
            banyak++;
        }
    }
    
    if (ketemu) {
        cout << " \t \t \t \t Bilangan " << bilangan << " ditemukan sebanyak " << banyak;
        cout << endl;
        cout << " \t \t \t \t pada posisi ke = ";
        for(i = 0; i < banyak; i++)
            cout << posisi[i] << " ";
    }
	else { 
        cout << " \t \t \t \t Bilangan " << bilangan << " tidak ditemukan ";
    }
    
    getch();
    
	return 0;
}
