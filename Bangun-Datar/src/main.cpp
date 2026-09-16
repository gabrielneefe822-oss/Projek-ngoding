#include "title.h"
#include "loading.h"
#include "luas.h"
#include "keliling.h"

#include <iostream>
#include <limits>
#include <string>

int main()
{
	clear();
	title();

	std::string bangunan[7] = {"Segitiga", "Persegi", "Persegi Panjang", "Belah Ketupat", "jajar genjang", "Trapesium", "Keluar"};
	int mode_hitung, pilihan;

	bool looping = true;

	while (looping == true) {

		std::cout << "Ingin menghitung 1. Luas 2. Keliling 3. Keluar\ndefault (luas -> 1) >> ";
		std::cin >> mode_hitung;

		if (std::cin.fail()) {
			std::cout << "\n--- HANYA MEMUAT INPUT INTEGER (1-2)! ---\n\n";
			load.loading_dots();
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if (mode_hitung == 1) {
			std::cout << "\n##########\n";
			std::cout << "## LUAS ##\n";
			std::cout << "##########\n";
		} else if (mode_hitung == 2) {
			std::cout << "\n##############\n";
			std::cout << "## KELILING ##\n";
			std::cout << "##############\n";
		} else if (mode_hitung == 3) {
			load.loading_keluar();
			looping = false;
			break;
		} else {
			std::cout << "\n!!! INPUT TIDAK VALID !!!\n\n";
			continue;
		}

		std::cout << "\nList Bangun Datar yang tersedia :\n";
		for(int i = 1; i <= 7; i++) {
			std::cout << "    " << i << ". " << bangunan[i-1] << '\n';
		}
		std::cout << "\nPilih Bangun Datar (1-7) = ";
		std::cin >> pilihan;

		if (std::cin.fail()) {
		    std::cout << "\n--- HANYA MENERIMA INPUT INTEGER! ---\n\n";
		    load.loading_dots();
		    std::cin.clear();
		    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		    continue;
		}

		switch(mode_hitung) {
			default :
				std::cout << "!NGAWOR!\n";
				continue;
			case 1 :
				switch(pilihan) {
					default :
						std::cout << "------------------\n";
						std::cout << "!Pilihan Angka! \n!tidak tersedia!\n";
						std::cout << "------------------\n";
						load.loading_dots();
						break;
					case 1 :
						LUAS.L_segitiga();
						break;
					case 2 :
						LUAS.L_persegi();
						break;
					case 3 :
						LUAS.L_panjang();
						break;
					case 4 :
						LUAS.L_ketupat();
						break;
					case 5 :
						LUAS.L_jajar_Genjang();
						break;
					case 6 :
						LUAS.L_trapesium();
						break;
					case 7 :
						load.loading_keluar();
						looping = false;
						break;
				}
				break;
			case 2 :
				switch(pilihan) {
					default :
						std::cout << "\n------------------\n";
						std::cout << "!Pilihan Angka! \n!tidak tersedia!\n";
						std::cout << "------------------\n\n";
						load.loading_dots();
						break;
					case 1 :
						KELILING.kll_segitiga();
						break;
					case 2 :
						KELILING.kll_persegi();
						break;
					case 3 :
						KELILING.kll_panjang();
						break;
					case 4 :
						KELILING.kll_ketupat();
						break;
					case 5 :
						KELILING.kll_jajar_Genjang();
						break;
					case 6 :
						KELILING.kll_trapesium();
						break;
					case 7 :
						load.loading_keluar();
						looping = false;
						break;
				}
				break;
		}
	}

	return 0;
}