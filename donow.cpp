/*
Name: Tyler Zhang
Program Name: Do Now 
Date: 12/18/24
Extra: None
*/
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main() {
    // sets the random seed
    srand(time(0));
    // intializes the double pi
    double d = 3.1415926535;
    // rounds to the 2nd decimal place by rounding on the double after it has been moved 2 digits over
    cout << round(d * 100) / 100 << endl;
    cout << (rand() % 10) + 1 << endl;
    return 0;
}
