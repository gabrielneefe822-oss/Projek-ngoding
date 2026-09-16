/*
	LUAS DEFINITION
*/

// Include Guard
#ifndef LUAS_H
#define LUAS_H

// Luas Struct
struct Luas {

	// luas Variable
	double luas;

	// All Function of bangun datar
	void L_segitiga();
	void L_persegi();
	void L_panjang();
	void L_ketupat();
	void L_jajar_Genjang();
	void L_trapesium();
};

extern Luas LUAS;

#endif