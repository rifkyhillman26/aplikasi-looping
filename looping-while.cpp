#include <iostream>
using namespace std;

int main () {

	int i = 1;
	int angka ;
	char jawaban;
	string kosakata;
	
	cout << "===== Selamat mencoba =====" << endl;
	cout << endl;
	cout << "apakah anda ingin melakukan perulangan ?\n";
	cout << "jawab ( y / t )";
	cin >> jawaban;
	
	if (jawaban == 'y') {
		cout << "masukan jumlah perulangan: ";
		cin >> angka;
		
		if (angka >= i){
			cout << "masukan kosa kata: ";
			cin >> kosakata;
		}else {
			cout << "angka tidak bisa kurang dari sama dengan 0.";
		}
		
		while (i <= angka){
			cout << endl;
			cout << i << "." << kosakata << endl;
			i++;
		}
		
		cout << endl;
		cout << "===== Looping berhasil =====";
		
	}else if (jawaban == 't'){
		cout << endl;
		cout << " OH,OK... ";
		cout << endl;
	}else {
		cout << endl;
		cout << "!!!!!! error !!!!!!";
		cout << endl;
	}


	return 0;
}
