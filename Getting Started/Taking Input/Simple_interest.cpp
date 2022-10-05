#include <iostream>
using namespace std;

int main(){
   double p;
   double r;
   double t;

   cout << "Enter the principal amount" << endl;
   cin >> p;
   cout << "Enter the rate in percent" << endl;
   cin >> r;
   cout << "Enter the time in years" << endl;
   cin >> t;
   double si=(p*r*t)/100.00;
   cout << "The simple interest is " << si << endl;

}