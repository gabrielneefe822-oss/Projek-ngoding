/*
	Animation Program of TITLE
*/

// HEADER
#include "title.h"

// Library
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

// Function for Animation Title
void title() {
	for (int i = 0; i <= 20; i++) {
		cout << "#" << flush;
		this_thread::sleep_for(chrono::milliseconds(50));
	}
	cout << '\n';

	string title = "### BANGUN DATAR ###";
	for (char c : title) {
		cout << c << flush;
		this_thread::sleep_for(chrono::milliseconds(50));
	}
	cout << '\n';

	for (int i = 0; i <= 20; i++) {
		cout << "#" << flush;
		this_thread::sleep_for(chrono::milliseconds(50));
	}
	cout << "\n\n";
}

// Function For Clear Screen
void clear() {
	cout << "\033[2J\033[1;1H";
}