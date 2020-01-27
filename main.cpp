//Datatypes_Stephen_Hawkins Unit 2 Assignment
// Date 1/25/20 IDE: Repl.it tool
#include <iostream>
using namespace std;

int main() 
{
//Variable declarations and initilizations
int input = 0;
int division = 0;
int dollars = 0; int dollars_remainder = 0;
int quarters = 0; int quarters_remainder = 0;
int dimes = 0; int dimes_remainder = 0;
int nickels = 0; int nickles_remainder = 0;
int pennies = 0; int pennies_remainder = 0;


//Input
cout << "Enter the amount of pennies you have.\n";
cin >> input;

//Processing
dollars = (input/100);
dollars_remainder =(input%100);
quarters = (dollars_remainder/25);
quarters_remainder = (dollars_remainder%25);
dimes = (quarters_remainder/10);
dimes_remainder = (quarters_remainder%10);
nickels = (dimes_remainder/5);
nickles_remainder = (dimes_remainder%5);
pennies = (nickles_remainder/1);
pennies_remainder = (nickles_remainder%1);

//Output
cout << "You will receive:\n" << dollars << " dollars\n";
cout << quarters << " quarters\n";
cout << dimes << " dimes\n";
cout << nickels << " nickels\n";
cout << pennies << " pennies\n";

  return 0; //exit success
}