#include <iostream>
// #include <conio.h> // getch
// #include <cstdlib> # system
#include <cmath>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout << "Szymon Blaszczynski" << endl;
	cout << setprecision(8) << M_PI << endl;
	cout << "\"Ala\"" << endl;
	cout << "'" << endl;
	int number_0 = 0;
	int number_1 = 0;
	cout << "Podaj dwie liczby: ";
	cin >> number_0 >> number_1;
	cout << "Liczba pierwsza: " << number_0 << ", liczba druga: " << number_1 \
		<< "." << endl;
	// system("PAUSE"); // works on linux? no.
	return 0;
}
