#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
	cout << "------------- \n";
	cout << " TEBAK ANGKA \n";
	cout << "------------- \n";
	cout << endl;

	cout << "------------- \n";
	cout << "  KESULITAN  \n";
	cout << "------------- \n";

	string kesulitan[3] = {"Mudah", "Sedang", "Susah"};
	int difficulty;

	cout << "1. " << kesulitan[0] << endl;
	cout << "2. " << kesulitan[1] << endl;
	cout << "3. " << kesulitan[2] << endl;
	cout << "Pilih Tingkat kesulitan (1-3) = ";
	cin >> difficulty;

	srand(time(0));
	int angka = (rand() % 10) + 1;

	if (difficulty == 1) {
		int kesempatan = 3;
		cout << "kamu punya 3x kesempatan! \n";

		while (kesempatan != 0) {
			int tebakan;

			cout << "Tebak angka (1-10) = ";
			cin >> tebakan;

			if (tebakan == angka) {
				cout << endl;
				cout << "Kamu Menang YEY!! \n";
				break;
			} else if (tebakan < angka) {
				cout << endl;
				cout << "kekecilan! \n\n";
				kesempatan -= 1;
			} else if (tebakan > angka) {
				cout << endl;
				cout << "kebesaran! \n\n";
				kesempatan -= 1;
			} else if (kesempatan == 0) {
				cout << "Kesempatan sudah habis! \n\n";
			}
		}
	} else if (difficulty == 2) {
		cout << "kamu hanya punya 2x kesempatan \n";
		int kesempatan = 2;

		while (kesempatan != 0) {
			int tebakan;

			cout << "Tebak angka (1-10) = ";
			cin >> tebakan;

			if (tebakan == angka) {
				cout << endl;
				cout << "Kamu Menang YEY!! \n";
				break;
			} else if (tebakan < angka) {
				cout << endl;
				cout << "kekecilan! \n\n";
				kesempatan -= 1;
			} else if (tebakan > angka) {
				cout << endl;
				cout << "kebesaran! \n\n";
				kesempatan -= 1;
			} else if (kesempatan == 0) {
				cout << "Kesempatan sudah habis! \n\n";
			}
		}
	} else if (difficulty == 3) {
		cout << "kamu hanya punya 1x kesempatan \n";
		int kesempatan = 1;

		while (kesempatan != 0) {
			int tebakan;

			cout << "Tebak angka (1-10) = ";
			cin >> tebakan;

			if (tebakan == angka) {
				cout << endl;
				cout << "Kamu Menang YEY!! \n";
				break;
			} else if (tebakan < angka) {
				cout << endl;
				cout << "kekecilan! \n\n";
				kesempatan -= 1;
			} else if (tebakan > angka) {
				cout << endl;
				cout << "kebesaran! \n\n";
				kesempatan -= 1;
			} else if (kesempatan == 0) {
				cout << "Kesempatan sudah habis! \n\n";
			}
		}
	}

	return 0;
}