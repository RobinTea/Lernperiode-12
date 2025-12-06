#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    ifstream file("input.txt");
    int dial = 50;
    int passcode = 0;

    string line; //input

    while (getline(file, line)) {
        
        string num = line; // copy of input for a version without letter

        num.erase( //remove letter in list num
            remove_if(num.begin(), num.end(), ::isalpha),
            num.end()
        );

        if (line.find("L") != string::npos) { //looks at line for letter
            
            int value = stoi(num); 

            for (int i = 1; i <= value; i++) {
                
                dial--;
                if (dial == 0) {
                    passcode++; //for part two
                }
                
                if (dial < 0){
                    dial = dial + 100;
                }
                
            }

        } 
        else {
            
            int value = stoi(num);

            for (int i = 1; i <= value; i++) {
                
                dial++;
                
                if (dial > 99){
                    dial = dial - 100;
                    passcode++;
                }
                
            }

        }   
        
        /*
        //redundant for part two
        if (dial == 0) {
            passcode++;
        }
        */

        
    }


    cout << passcode;
}
