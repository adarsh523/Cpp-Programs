#include<iostream>

using namespace std;
int main() {
    int a;
    int &ref = a; // independent reference
    int b = 19;
    ref = b;
    cout << a << " " << ref << "\n";
    ref--;
    cout << a << " " << ref << " " << b << "\n";


    return 0;
}
