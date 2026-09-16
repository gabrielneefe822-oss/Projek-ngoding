#ifndef KELILING_H
#define KELILING_H

struct Keliling {
	double keliling;

	void kll_segitiga();
	void kll_persegi();
	void kll_panjang();
	void kll_ketupat();
	void kll_jajar_Genjang();
	void kll_trapesium();
};

extern Keliling KELILING;

#endif