#include <iostream>

using namespace std;

int main() {
    
	int i,j;
    int nilai[10];
    
    cout << " \t \t \t \t ==================================================== " << endl;
	cout << " \t \t \t \t PROGRAM ARRAY 1 DIMENSI DENGAN NILAI INPUT KEYBOARD  " << endl;
	cout << " \t \t \t \t ==================================================== " << endl << endl;
    
	cout << " \t \t \t \t Berapa jumlah elemen yang ingin diisi : ";
    cin >> j;
    
    for (i = 0; i < j; i++) {
        cout << " \t \t \t \t Masukkan Nilai Ke- " << i + 1 << " = ";
        cin >> nilai[i];
    }
    cout << endl;
    
    cout << " \t \t \t \t Cetak " << endl;
    
	for (i = 0; i < j; i++) {
        cout << " \t \t \t \t Nilai Ke - " << i + 1 << " = " << nilai[i] << endl;
    }
    
    return 0;
}
