// Linux Terminal Project

// Include Library

#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <sstream>
#include <thread>
#include <chrono>
#include <csignal>

using namespace std;

// variable LOGIN
	
string user;
string passwd;
bool program_finish = false;
bool login_berhasil = false;
int booting_greeter = 1;

// Color variable
const string RESET  = "\033[0m";
const string RED    = "\033[31m";
const string GREEN  = "\033[32m";
const string YELLOW = "\033[33m";
const string CYAN   = "\033[36m";
const string BOLD   = "\033[1m";

// Disable Keyboard Interupt key
volatile sig_atomic_t sigint_terjadi = 0;

void handle_sigint(int sig) {
	sigint_terjadi = 1;
	// write(STDOUT_FILENO, "^C\n", 3);
	
	cout << "[" << RED << user << RESET << "@GabrielOS ~/ ] \n";
	cout << "> \n";
}

int main() {

	signal(SIGINT, handle_sigint);

	// Title OS
	cout << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "Welcome To" << CYAN << " GabrielOS" << RESET << endl;
	this_thread::sleep_for(chrono::seconds(1));

	// booting animation
	this_thread::sleep_for(chrono::milliseconds(3000));
	cout << GREEN << "[OK] " << RESET << "memuat kernel GOS... \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(1800));
	cout << GREEN << "[OK] " << RESET << "membangun initramfs.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(350));
	cout << GREEN << "[OK] " << RESET << "mendeteksi perangkat keras.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << GREEN << "[OK] " << RESET << "mounting filesystem root.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(1200));
	cout << GREEN << "[OK] " << RESET << "membangun live environment.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(1200));
	cout << GREEN << "[OK] " << RESET << "mengaktifkan systemd network-manager.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(1500));
	cout << GREEN << "[OK] " << RESET << "menyambungkan ke jaringan.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(1350));
	cout << GREEN << "[OK] " << RESET << "mengaktifkan semua layanan.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(200));
	cout << GREEN << "[OK] " << RESET << "memuat driver grafis.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << GREEN << "[OK] " << RESET << "menyiapkan user-session.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(1200));
	cout << GREEN << "[OK] " << RESET << "membangun seluruh sistem sekarang.. \n";
	booting_greeter += 1;
	this_thread::sleep_for(chrono::milliseconds(1800));
	cout << GREEN << "[OK] " << RESET << "start-GOS now.. \n";
	booting_greeter += 1;
	
	this_thread::sleep_for(chrono::seconds(2));
	system("clear");

	// MAIN SYSTEM
	while (!program_finish) {

		// Title & Subtitle
		cout << endl;
		cout << CYAN << "|===================|" << RESET << "\n";
		cout << CYAN << "|=== GOS 26.8.19 ===|" << RESET << "\n";
		cout << CYAN << "|===================|" << RESET << "\n\n";
		cout << "ini adalah prototype dari sistem operasi GOS \n";
		cout << "harap maklum apabila masih ada yang kurang karena ini \n";
		cout << "dibuat oleh anak kelas 8 SMP yang baru belajar C++ \n\n";
		cout << "LOGIN menggunakan user 'root' \n";
		cout << "Password = root \n\n";

		// LOGIN HANDLER
		login_berhasil = false;
		do {
			cout << "Login : ";
			cin >> user;
			cout << "Password : ";
			cin >> passwd;
		
			if (user == "root") {
				if (passwd == "root") {
					cout << "\n";
					cout << "--- LOGIN SUCCESS ---" << endl;
					login_berhasil = true;
					break;
				} else {
					cout << RED << "LOGIN Invalid!" << RESET << endl;
				}
			} else {
				cout << RED << "LOGIN is Invalid!" << RESET << endl;
			}
		} while (!login_berhasil);


		cin.ignore();
	
		// Main System
	
		cout << "\n";
		bool exit_program = false;
		string command;
		int booting_chase = 1;
	
		system("hyfetch");

		while (!exit_program) {
			cout << "[" << RED << user << RESET << "@GabrielOS ~/ ] \n";
			cout << "> ";

			getline(cin, command);
		
			if (sigint_terjadi) {
            	sigint_terjadi = 0;
            	cin.clear();
            	continue;
        	}

			if (command.empty()) {
				continue;
			}

			stringstream ss(command);
			string cmd, arg;
			ss >> cmd;
			getline(ss, arg);
			if (!arg.empty() && arg[0] == ' ') {
				arg = arg.substr(1);
			}

			// Logic
		
			if (cmd == "whoami") {
				cout << user << endl;
			} else if (cmd == "exit") {
				cout << "Logout..." << endl;
				this_thread::sleep_for(chrono::seconds(2));
				exit_program = true;
				system("clear");
			} else if (cmd == "clear") {
				system("clear");
			} else if (cmd == "ls") {
				system("ls");
			} else if (cmd == "cmatrix") {
				system("cmatrix");
			} else if (cmd == "lsblk") {
				system("lsblk");
			} else if (cmd == "btop") {
				system("btop");
			} else if (cmd == "nano") {
				if (arg.empty()) {
					system("nano");
				} else {
					string full_cmd = "nano " + arg;
					system(full_cmd.c_str());
				}
			} else if (cmd == "shutdown") {
				cout << " shutting down system now... \n";
				this_thread::sleep_for(chrono::seconds(2));
				system("clear");
				this_thread::sleep_for(chrono::milliseconds(1400));
				cout << GREEN << " [OK] " << RESET << "menghentikan semua service.. \n";
				booting_chase += 1;
				this_thread::sleep_for(chrono::milliseconds(1200));
				cout << GREEN << " [OK] " << RESET << "menyimpan user-session.. \n";
				booting_chase += 1;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << GREEN << " [OK] " << RESET << "memutus koneksi jaringan.. \n";
				booting_chase += 1;
				this_thread::sleep_for(chrono::milliseconds(1300));
				cout << GREEN << " [OK] " << RESET << "unmounting all filesystem.. \n";
				booting_chase += 1;
				this_thread::sleep_for(chrono::milliseconds(1500));
				cout << GREEN << " [OK] " << RESET << "menutup semua aplikasi.. \n";
				booting_chase += 1;
				this_thread::sleep_for(chrono::milliseconds(200));
				cout << GREEN << " [OK] " << RESET << "membersihkan cache RAM dan system.. \n";
				booting_chase += 1;
				this_thread::sleep_for(chrono::milliseconds(1300));
				cout << GREEN << " [OK] " << RESET << "menonaktifkan semua layanan.. \n";
				booting_chase += 1;
				this_thread::sleep_for(chrono::milliseconds(1800));
				cout << GREEN << " [OK] " << RESET << "mematikan seluruh sistem.. \n";
				booting_chase += 1;
				this_thread::sleep_for(chrono::milliseconds(1800));
				cout << GREEN << " [OK] " << RESET << "GOS sudah dimatikan.. \n";
				booting_chase += 1;
				exit_program = true;
				program_finish = true;

			} else if (cmd == "reboot") {
				cout << "rebooting system now... \n";
				this_thread::sleep_for(chrono::seconds(2));
				system("clear");

					this_thread::sleep_for(chrono::milliseconds(1400));
					cout << GREEN << " [OK] " << RESET << "menghentikan semua service.. \n";
					booting_chase += 1;
					this_thread::sleep_for(chrono::milliseconds(1200));
					cout << GREEN << " [OK] " << RESET << "menyimpan user-session.. \n";
					booting_chase += 1;
					this_thread::sleep_for(chrono::milliseconds(100));
					cout << GREEN << " [OK] " << RESET << "memutus koneksi jaringan.. \n";
					booting_chase += 1;
					this_thread::sleep_for(chrono::milliseconds(1300));
					cout << GREEN << " [OK] " << RESET << "unmounting all filesystem.. \n";
					booting_chase += 1;
					this_thread::sleep_for(chrono::milliseconds(1500));
					cout << GREEN << " [OK] " << RESET << "menutup semua aplikasi.. \n";
					booting_chase += 1;
					this_thread::sleep_for(chrono::milliseconds(200));
					cout << GREEN << " [OK] " << RESET << "membersihkan cache RAM dan system.. \n";
					booting_chase += 1;
					this_thread::sleep_for(chrono::milliseconds(1300));
					cout << GREEN << " [OK] " << RESET << "menonaktifkan semua layanan.. \n";
					booting_chase += 1;
					this_thread::sleep_for(chrono::milliseconds(1800));
					cout << GREEN << " [OK] " << RESET << "mematikan seluruh sistem.. \n";
					booting_chase += 1;
					this_thread::sleep_for(chrono::milliseconds(1800));
					cout << GREEN << " [OK] " << RESET << "GOS sudah dimatikan.. \n";
					booting_chase += 1;

				system("clear");
				this_thread::sleep_for(chrono::seconds(5));
				system("/home/gabriel/C++/Executable/system");
		
			} else if (cmd == "thunar") {
				system("thunar");
			} else if (cmd == "hyfetch") {
				system("hyfetch");
			} else if (cmd == "echo") {
				cout << arg << endl;
			} else {
				cout << command << ": command not found" << endl;
			}
		}
	}
	return 0;
}