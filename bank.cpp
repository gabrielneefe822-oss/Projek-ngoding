// Bank Project
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
	string perintah[5] = {"cek saldo", "setor tunai", "tarik tunai","transfer tunai", "keluar"};
	int setoran;
	int rekening;
	int uang_transfer;
	int uang_tarikan;
	int saldo = 200000;
	int nomor_perintah;
	bool keluar_program = false;
	int loading = 3;

	while (keluar_program == false) {
		cout << "\n\n";
		cout << "=== BANK ===" << "\n\n";
		cout << "1. " << perintah[0] << endl;
		cout << "2. " << perintah[1] << endl;
		cout << "3. " << perintah[2] << endl;
		cout << "4. " << perintah[3] << endl;
		cout << "5. " << perintah[4] << endl;

		cout << endl;
		cout << "Silahkan pilih : ";
		cin >> nomor_perintah;

		if (nomor_perintah == 1) {
			system("clear");
			cout << "\n\n";
			cout << "Saldo = " << "Rp" << saldo << "\n\n";
			this_thread::sleep_for(chrono::seconds(1));
			cout << "Loading." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
		} else if (nomor_perintah == 2) {
			system("clear");
			cout << "Mau Setor Berapa? : ";
			cin >> setoran;
			saldo += setoran;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "Loading." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << endl;
			cout << "== Setoran Berhasil! ==";
		} else if (nomor_perintah == 3) {
			system("clear");
			cout << "Mau Tarik berapa? : ";
			cin >> uang_tarikan;
			saldo -= uang_tarikan;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "Loading." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << endl;
			cout << "== Penarikan Berhasil! ==";
		} else if (nomor_perintah == 4) {
			system("clear");
			cout << "Transfer ke rekening? : ";
			cin >> rekening;
			cout << "Transfer berapa? : ";
			cin >> uang_transfer;
			saldo -= uang_transfer;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "Loading." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << endl;
			cout << "== Transfer Berhasil! ==";
		} else if (nomor_perintah == 5) {
			system("clear");
			this_thread::sleep_for(chrono::seconds(1));
			cout << "Keluar." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			cout << "." << flush;
			this_thread::sleep_for(chrono::seconds(1));
			loading += 1;
			keluar_program = true;
		}
	}

	return 0;
}