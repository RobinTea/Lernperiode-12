#include <iostream>
#include <vector>

using namespace std;

int main() {
    float a, b, c;
    
    cout << "please type in a number" << endl;
    cin >> a;

    cout << "please choose an operator ( 1 [+], 2[-], 3 [*], 4 [/])";
    cin >> b;

    cout << "please type your second number" << endl;
    cin >> c;

    if(b == 1){
        float sum = a + c;
        cout << sum << endl;
    }
    else if(b == 2){
        float dif = a - c;
        cout << dif << endl;
    }
    else if(b == 3){
        float pro = a * c;
        cout << pro << endl;
    }
    else if(b == 4){
        float quo = a / c;
        cout << quo << endl;
    }
    else{
        cout << "input invalid" << endl;
    }
}