#include <iostream>
#include <cmath> // M_PI
#include <iomanip> // setprecision

using namespace std;

int main(int argc, char** argv) {
  cout << "Szymon Blaszczynski" << endl;
  int number_0 = 0;
  int number_1 = 0;
  cout << "Insert two integer numbers in formato of '1 2' without quotes: ";
  cin >> number_0 >> number_1;
  cout << "Sum: " << number_0 + number_1 \
    << ", subtraction: " << number_0 - number_1 \
    << ", factor: " << number_0 * number_1 \
    << ", division: " << double(number_0) / double(number_1) \
    << ", power: " << pow(number_0, number_1) \
    << "." << endl;
  return 0;
}
