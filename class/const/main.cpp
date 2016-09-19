#include <iostream>
#include "Increment.h"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    Increment value(10, 5);
    value.print();
    cout<<"+++++++++++++++++++++++++++++"<<endl;

    for (int i = 0; i < 5; ++i) {
        value.addIncrement();
        value.print();
        cout<<"+++++++++++++++++++++++++++++"<<endl;
    }
    return 0;
}