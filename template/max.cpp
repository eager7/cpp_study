#include <iostream>

using namespace std;

template <class T>
T max(T x, T y, T z){
    T max = x;
    max > y ? max : (max = y);
    max > z ? max : (max = z);
    return max;
}

int main()
{
    cout<<"1,2,3 max:"<<max(1,2,3)<<endl;
    cout<<"55.1,265.4,34.5 max:"<<max(55.1,265.4,34.5)<<endl;
    return 0;
}
