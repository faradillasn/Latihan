#include <iostream>
using namespace std;


int main () {
	char nilai [10];
		int i,hasil=0 ;

		for (int i=0; i< 10; i++) {
		cout << "MASUKKAN CHARACTER : ";
		cin >> nilai [i];

		if (nilai[i] == 'a') {
		hasil++ ;
}
		cout << "HASIL ELEMEN : ";
		
		for (int i=0; i< 10; i++) {
		cout << nilai [i];
}
		cout << endl << "JUMLAH CHARACTER a : " << hasil;

}

