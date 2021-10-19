#include <iostream>
#include <string>
using namespace std;

int main() {
	int nomor_plat, index, temp = 0;
	string cmd;
	string slot[50];
	
	for (int i = 0; i <= 49; i++) {
		slot[i] = "x";
	}

	cout << "=====AREA PARKIR GEDUNG B=====" << endl;
	cout << "   MALL PLAZA CIPONDOH RAYA" << endl;
	cout << endl;
	cout << endl;
	cout << "==============================" << endl;
	cout << "ketik -help untuk melihat bantuan" << endl;
	cout << endl;

	while (true) {
		cout << "command : ";
		cin >> cmd;

		if (cmd == "-help") {
			cout << endl;
			cout << "--BANTUAN--" << endl;
			cout << "-help : Tampilkan bantuan" << endl;
			cout << "-i    : Input mobil masuk" << endl;
			cout << "-d    : Menampilkan denah parkir" << endl;
			cout << "11111 : Kembali" << endl;
			cout << "-exit : Keluar" << endl;
			continue;
		}

		if (cmd == "-i") {
			for (int i = 0; i <= 49; i++) {
				cout << "nomor plat: ";
				cin >> nomor_plat;

				if (nomor_plat == 11111) {
					break;
				}

				index = nomor_plat % 50;
				string plat = to_string(nomor_plat);

				
				while (index <= 49) {
					if (slot[index] == "x") {
						slot[index] = plat;
						break;
					}
					index++;
				}
				if (index > 49) {
					index = 0;
					while (index <= 49) {
						if (slot[index] == "x") {
							slot[index] = plat;
							break;
						}
						index++;
					}
					continue;
				}
			}
			continue;
		}

		if (cmd == "-exit") {
			break;
		}

		if (cmd == "-d") {
			for (int row = 0; row <= 4; row++) {
				for (int column = 0; column <= 9; column++) {
					cout << slot[temp] << "\t";
					temp++;
				}
				cout << endl;
				cout << endl;
			}
			continue;
		}

		else {
			cout << "invalid command" << endl;
			continue;
		}
	}
	return 0;
}