#include <iostream>

using namespace std;

int main(){
	
	int angka [2][3][4];
    int i,j,k;

    cout << " \t \t \t \t ============================================== " << endl;
	cout << " \t \t \t \t PROGRAM ARRAY 3 DIMENSI DENGAN SISTEM MATRIKS  " << endl;
	cout << " \t \t \t \t ============================================== " << endl << endl;

    // Mengisi nilai kedalam elemen-elemen array angka
    cout << " \t \t \t \t == Masukkan elemen-elemen array angka == \n ";
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 4; k++){
                cout << " \t \t \t \t angka indeks ke ["<<i<<"]["<<j<<"]["<<k<<"]"<<" = ";
                cin >> angka[i][j][k];
            }
        }
    }

	cout << endl;
	cout << endl;
	
    cout << " \t \t \t \t ========================= " << endl;
	cout << " \t \t \t \t TAMPIL NILAI DALAM ARRAY  " << endl;
	cout << " \t \t \t \t ========================= " << endl << endl;

    //menampilkan nilai dari setiap elemen array angka
    for(i = 0; i < 2; i++){
    	for(j = 0; j < 3; j++){
           for(k = 0; k < 4; k++){
              cout << " \t \t \t \t angka indeks ke ["<<i<<"]["<<j<<"]["<<k<<"]"<<" = "<<angka[i][j][k]<<endl;
        	}
    	}
    }

     return 0;
}
