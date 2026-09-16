/*
	Logic && Function of LUAS
*/

// Include HEADER
#include "luas.h"
#include "loading.h"

// Library
#include <iostream>
#include <thread>
#include <chrono>
#include <limits>
using namespace std;

Luas LUAS;

// Function SEGITIGA
void Luas::L_segitiga() {
		
	// Variabel Luas Segitiga
	double alas, tinggi;

	// TITLE
	cout << "--- SEGITIGA ---\nAlas (cm) = ";
	cin >> alas;
	cout << "Tinggi (cm) = ";
	cin >> tinggi;

	// Menanggapi !integer pada variabel
	if (cin.fail()) {
		cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		this_thread::sleep_for(chrono::seconds(1));	
		load.loading_dots();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return;
	}

	// HASIL & Rumus LUAS SEGITIGA
	load.loading_menghitung();
	luas = (alas * tinggi) / 2;
	cout << "\nLUAS = " << Luas::luas << " cm^2\n\n";
	this_thread::sleep_for(std::chrono::seconds(2));	
}

// Function PERSEGI
void Luas::L_persegi() {

	// Variabel LUAS Persegi
	double sisi;

	// TITLE
	cout << "--- PERSEGI ---\nSisi (cm) = ";
	cin >> sisi;

	// Menanggapi !integer pada variabel
	if (cin.fail()) {
		cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		this_thread::sleep_for(chrono::seconds(1));	
		load.loading_dots();
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	// HASIL
	load.loading_menghitung();
	luas = sisi * sisi;
	std::cout << "\nLUAS = " << luas << " cm^2\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));	
}

// Function PERSEGI PANJANG
void Luas::L_panjang() {

	// Variabel LUAS persegi panjang
	double panjang, lebar;

	// TITLE
	std::cout << "\n--- PERSEGI PANJANG ---\nPanjang (cm) = ";
	std::cin >> panjang;
	std::cout << "Lebar (cm) = ";
	std::cin >> lebar;

	// Menanggapi !integer pada variabel
	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));	
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	// HASIL & rumus LUAS persegi panjang
	load.loading_menghitung();
	luas = panjang * lebar;
	std::cout << "\nLUAS = " << luas << " cm^2\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));	
}

// Function Belah Ketupat
void Luas::L_ketupat() {
		
	// Variabel LUAS Belah ketupat
	double D1, D2;

	// TITLE
	std::cout << "\n--- BELAH KETUPAT ---\nDiagonal 1 (cm) = ";
	std::cin >> D1;
	std::cout << "Diagonal 2 (cm) = ";
	std::cin >> D2;

	// Menanggapi !integer pada variabel
	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));	
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	// HASIL & Rumus LUAS belah ketupat
	load.loading_menghitung();
	luas = (D1 * D2) / 2;
	std::cout << "\nLUAS = " << luas << " cm^2\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));	
}

// Function JAJAR GENJANG
void Luas::L_jajar_Genjang() {

	// Variabel LUAS jajar Genjang
	double alas, tinggi;

	// TITLE
	std::cout << "\n--- JAJAR GENJANG ---\nAlas (cm) = ";
	std::cin >> alas;
	std::cout << "Tinggi (cm) = ";
	std::cin >> tinggi;

	// Menanggapi != integer pada variabel
	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! --- \n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));	
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	// HASIL & Rumus LUAS jajar genjang
	load.loading_menghitung();
	luas = alas * tinggi;
	std::cout << "\nLUAS = " << luas << " cm^2\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));	
}

// Function Trapesium
void Luas::L_trapesium() {

	// Variabel LUAS Trapesium
	double sisi_sejajar_A, sisi_sejajar_B, tinggi;

	// TITLE
	std::cout << "\n--- TRAPESIUM ---\nSisi Sejajar A (cm) = ";
	std::cin >> sisi_sejajar_A;
	std::cout << "sisi sejajar B (cm) = ";
	std::cin >> sisi_sejajar_B;
	std::cout << "tinggi (cm) = ";
	std::cin >> tinggi;

	// Menanggapi !integer pada variabel
	if (std::cin.fail()) {
		std::cout << "\n\n--- BUKAN INTEGER HANYA MENERIMA INTEGER SAJA! ---\n\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));	
		load.loading_dots();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	// HASIL & Rumus LUAS trapesium
	load.loading_menghitung();
	luas = (sisi_sejajar_A + sisi_sejajar_B) * tinggi / 2;
	std::cout << "\nLUAS = " << luas << " cm^2\n\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));	
}