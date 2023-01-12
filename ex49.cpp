#include <iostream>
using namespace std;
struct Distance{
    int m;
    float cm;
};

int main() {
    struct Distance d1, d2;
    int len;
    cin >> len;
    d1.m = len/100;
    d2.cm = len - (d1.m *100);
    cout<<"this man is " << d1.m << "m "<< d2.cm<< "cm tall" << endl;
    return 0;
}
