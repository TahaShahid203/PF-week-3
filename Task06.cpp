#include <iostream>
using namespace std;

main () {

 string name;
 float matric;
 float matricPer;
 float inter;
 float interPer;
 float matricWei;
 float interWei;
 float ecat;
 float ecatPer;
 float ecatWei;
 float total;


 cout << "Enter your name: ";
 cin >> name;
 cout << "Enter your matric obtained marks: ";
 cin >> matric;
 cout << "Enter your intermediate marks: ";
 cin >> inter;
 cout << "Enter your ecat numbers: ";
 cin >> ecat;


 matricPer = matric/11;
 interPer =  (inter/55)*10;
 matricWei = matricPer/10;
 interWei = interPer *2/5;
 ecatPer = ecat/4;
 ecatWei = ecatPer/2;
 
 total = matricWei + interWei + ecatWei;

 cout << "Your aggregate score is: " << total;

}