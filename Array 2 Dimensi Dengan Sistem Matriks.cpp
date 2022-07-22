#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	
	int matriks[100][100];
	int jum_baris, jum_kolom, i, j;
	
    cout << " \t \t \t \t ============================================== " << endl;
	cout << " \t \t \t \t PROGRAM ARRAY 2 DIMENSI DENGAN SISTEM MATRIKS  " << endl;
	cout << " \t \t \t \t ============================================== " << endl << endl;
	
	cout << " \t \t \t \t Input jumlah baris matriks : ";
	cin >> jum_baris;
 
	cout << " \t \t \t \t Input jumlah kolom matriks : ";
	cin >> jum_kolom;
	cout << endl;
 
	// proses input array
	for(i = 0; i < jum_baris; i++){
		for(j = 0; j < jum_kolom; j++){
			cout << " \t \t \t \t Baris " << i + 1 << ", kolom "<< j + 1 << " = ";
			cin >> matriks[i][j];
			}
		cout << endl;
	}
 
	cout << " \t \t \t \t Hasil matriks: " << endl;
 
	// menampilkan array
	for(i = 0; i < jum_baris; i++){
		for(j = 0; j < jum_kolom; j++){
			cout << " \t \t \t \t " << matriks[i][j] << " ";
			}
    	cout << endl;
	}
 
  return 0;
}
