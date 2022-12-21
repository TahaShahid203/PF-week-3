#include <iostream>
using namespace std;

main () {

  int MegaBytes;
  int Bits;

 cout << "Enter value in Megabytes: ";
 cin >> MegaBytes;
 Bits = MegaBytes * 1024 * 1024 * 8;
 cout << "Your value in bits is: " << Bits;
}