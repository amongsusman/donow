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
    srand(time(0));
    double d = 3.1415926535;
    cout << round(d * 100) / 100 << endl;
    cout << (rand() % 10) + 1 << endl;
    return 0;
}