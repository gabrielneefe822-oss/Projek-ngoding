#include "keliling.h"
#include "loading.h"

#include <iostream>
#include <limits>
#include <thread>
#include <chrono>

Keliling KELILING;

void Keliling::kll_segitiga() {
	double sisi_A, sisi_B, sisi_C;

	std::cout << "\n--- SEGITIGA ---\nSisi A (cm) = ";
	std::cin >> sisi_A;
	std::cout << "Sisi B (cm) = ";
	std::cin >> sisi_B;
	std::cout << "Sisi C (cm) = ";
	std::cin >> sisi_C;

	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	load.loading_menghitung();
	keliling = sisi_A + sisi_B + sisi_C;
	std::cout << "\nKELILING = " << keliling << " cm\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Keliling::kll_persegi() {
	double sisi;

	std::cout << "\n--- PERSEGI ---\nSisi (cm) = ";
	std::cin >> sisi;

	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	load.loading_menghitung();
	keliling = sisi * 4;
	std::cout << "\nKELILING = " << keliling << " cm\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Keliling::kll_panjang() {
	double panjang, lebar;

	std::cout << "\n--- PERSEGI PANJANG ---\nPanjang (cm) = ";
	std::cin >> panjang;
	std::cout << "Lebar (cm) = ";
	std::cin >> lebar;

	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	load.loading_menghitung();
	keliling = (panjang + lebar) * 2;
	std::cout << "\nKELILING = " << keliling << " cm\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Keliling::kll_ketupat() {
	double sisi;

	std::cout << "\n--- BELAH KETUPAT ---\nSisi (cm) = ";
	std::cin >> sisi;

	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	load.loading_menghitung();
	keliling = sisi * 4;
	std::cout << "\nKELILING = " << keliling << " cm\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Keliling::kll_jajar_Genjang() {
	double sisi_A, sisi_B;

	std::cout << "\n--- JAJAR GENJANG ---\nSisi A (cm) = ";
	std::cin >> sisi_A;
	std::cout << "Sisi B (cm) = ";
	std::cin >> sisi_B;

	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	load.loading_menghitung();
	keliling = (sisi_A + sisi_B) * 2;
	std::cout << "\nKELILING = " << keliling << " cm\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Keliling::kll_trapesium() {
	double sisi_A, sisi_B, sisi_C, sisi_D;

	std::cout << "\n--- TRAPESIUM ---\nSisi A (cm) = ";
	std::cin >> sisi_A;
	std::cout << "Sisi B (cm) = ";
	std::cin >> sisi_B;
	std::cout << "Sisi C (cm) = ";
	std::cin >> sisi_C;
	std::cout << "Sisi D (cm) = ";
	std::cin >> sisi_D;

	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	load.loading_menghitung();
	keliling = sisi_A + sisi_B + sisi_C + sisi_D;
	std::cout << "\nKELILING = " << keliling << " cm\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
}