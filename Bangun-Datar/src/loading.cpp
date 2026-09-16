/*
	Loading Animation Files
*/

// Include HEADER
#include "loading.h"

// Library
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

// Include Loading struct in HEADER
Loading load;

// FUNCTION LOADING ANIMATION
void Loading::loading_dots() { // while preparing the program
	cout << "Preparing --> [";
	for (int i = 0; i < 10; i++) {
		cout << "#" << flush;
		this_thread::sleep_for(chrono::milliseconds(250));
	}
	cout << "]\n";
}

void Loading::loading_menghitung() { // Loading animation while counting numbers
	cout << "\nMENGHITUNG   [";
	for (int i = 0; i < 10; i++) {
		cout << "#" << flush;
		this_thread::sleep_for(chrono::milliseconds(250));
	}
	cout << "]\n";
}

void Loading::loading_keluar() { // while user want to quit
	cout << "\nQuitting";
	for (int i = 0; i < 3; i++) {
		cout << "." << flush;
		this_thread::sleep_for(chrono::seconds(1));
	}
	cout << "\n";
}