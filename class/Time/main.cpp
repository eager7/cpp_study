#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    Time t;

    cout<<"The universal time is:"<<endl;
    t.printUniversal();
    cout<<"The standard time is:"<<endl;
    t.printStandard();
    cout<<"----------------------------"<<endl;

    t.setTime(13, 27, 6);
    cout<<"The universal time is:"<<endl;
    t.printUniversal();
    cout<<"The standard time is:"<<endl;
    t.printStandard();
    cout<<"----------------------------"<<endl;

    t.setTime(12, 60, 60).printUniversal();
    cout<<"The universal time is:"<<endl;
    t.printUniversal();
    cout<<"The standard time is:"<<endl;
    t.printStandard();
    cout<<"----------------------------"<<endl;

    t.setTime(99, 99, 99);
    cout<<"The universal time is:"<<endl;
    t.printUniversal();
    cout<<"The standard time is:"<<endl;
    t.printStandard();
    cout<<"----------------------------"<<endl;

    return 0;
}