#include <iostream>
using namespace std;

int main() {

    // numbers - int, float, double
    20; 500; -100; 0; // int
    1.5f; 9.99f; //float - 7 place percision
    1.5; 9.99; //double - 15 place percision

    // logical values - bool
    true; false;

    // char
    'a'; 'b'; '$'; 

    // those above are not variables
    int age = 23; // int const or const int
    age = 50;
    cout << age << endl;

    // define bool and char
    bool hungry = true;
    char dollar = '$';

    auto number = 10; // automaticaly assigns datatype

    cout << typeid(age).name() << endl; // gives out datatype of variable age
    cout << typeid(1.5).name() << endl; // gives out datatype of 1.5 (which is double)

    // implicit type convertion
    char intToChar = 65; //A 
    int charToInt = 'A'; //65 becasue ascii - if float it will convert to int

}