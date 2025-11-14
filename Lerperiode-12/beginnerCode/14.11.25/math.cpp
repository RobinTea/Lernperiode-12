
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//start this in program.cpp -> no main function here

int math() {
    true;
    
    //auto x = 45.5, y = 12, z = 193.3f; wrong cause multiple types in one line

    int x = 2;
    int y = 3;

    y++;
    
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x / y << endl;
    cout << x * y << endl;

    //type casting -> usally removes after coma but with this it can last
    float z = y/ (float) x;

    //implicit conversion
    cout << ('B' + true) - ('A'/2) << endl;

    //percision
    cout << ((1.20 - 1.15) == 0.05) << endl;

    //modulo only full exept power
    cout << pow(2, 3) << endl; //=  8

    int a;
    cin >> a; // user input

    return 0;

}

/*
int main() {
    math(); // Calls your function
    return 0;
}
*/
