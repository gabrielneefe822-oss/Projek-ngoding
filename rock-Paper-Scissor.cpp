/*	C++ Rock Paper Scissor Game
	  made in 29 August 2026
*/

// Included Library
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// An Array for move choice
string pilihan[3] = {"Batu 🪨", "Gunting ✂️", "Kertas 🗞️"};

int main() {
	// Title
	cout << endl;
	cout << "------------------- \n";
	cout << "gunting batu kertas \n";
	cout << "   ✂️    🪨    🗞️ \n";
	cout << "------------------- \n\n";

	cout << "3 ronde mulai! \n\n";

	int ronde = 3;

	// Add Different Random Number Each Time the Program Start
	srand(time(0));

	// Score
	int CPU_score = 0;
	int user_score = 0;

	// Game loop
	while (ronde > 0) {

		// User and Computer Input
		int CPU_choice = (rand() % 3) + 1;
		int user_choice;

		// User choosen move
		cout << "1. " << pilihan[0] << endl;
		cout << "2. " << pilihan[1] << endl;
		cout << "3. " << pilihan[2] << endl;

		cout << "Pilih Gerakanmu (1-3) = ";
		cin >> user_choice;
		cout << endl;

		// Check If user input is not Valid
		if (user_choice != 1 && user_choice != 2 && user_choice != 3 ) {
			cout << "❌ Input (angka/pilihan) !VALID ❌ \n\n";
			continue;
		}

		// Print what is CPU choose
		cout << "CPU = " << pilihan[CPU_choice - 1] << endl;

		// Print What is User choose
		cout << "Kamu = " << pilihan[user_choice - 1] << endl;

		// Main Logic of Game
		if (user_choice == CPU_choice) {
			cout << endl;
			cout << "-------------- \n";
			cout << "     Seri \n";
			cout << "-------------- \n";
			ronde -= 1;
		} else if (CPU_choice == (user_choice % 3) + 1) {
			cout << endl;
			cout << "----------------- \n";
			cout << "🟢 Kamu Menang 🟢 \n";
			cout << "----------------- \n";
			user_score += 1;
			ronde -= 1;
		}  else {
			cout << endl;
			cout << "----------------- \n";
			cout << "   🟥 Kalah 🟥 \n";
			cout << "----------------- \n";
			CPU_score += 1;
			ronde -= 1;
		}

		if (ronde == 0) {
			cout << endl;
			cout << "Ronde Berakhir... \n";
			cout << "CPU " << CPU_score << " - " << user_score << " Kamu \n";
		}
	}

	return 0;
}