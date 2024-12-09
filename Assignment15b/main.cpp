// Maia Barnhart
// CIS 1202 501

#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
T half(T value) {
    return value / 2.0;
}

int half(int value) {
    double halfVal = static_cast<double>(value) / 2.0;
    return static_cast<int>(round(halfVal));
}

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
    
    return 0;
}
