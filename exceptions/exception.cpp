#include <iostream>

using namespace std;

int main () {
    int i, j, div;
    while (true) {
        cout<<"Please enter the numbers:\n";
        cin>>i;
        cin>>j;
        try {
            if (j == 0) {
                throw "Division by zero not allowed.";
            }
            div = i / j;
            break;
        } catch (const char* message) {
            cout << message << endl;
            continue;
        }
    }
    cout << "Result is: " << div << endl;
    return 0;
}