#include <iostream>
using namespace std;
int main() {
    int n;
    double i, pv, pmt, fv;
    cout << "N: ";   cin >> n;
    cout << "I: ";   cin >> i;
    cout << "PV: ";  cin >> pv;
    cout << "PMT: "; cin >> pmt;
    fv = pv;
    while(n-- > 0) {
        fv = fv*(1+(i/100))+pmt;
    }
    cout << "FV : " << fv << endl;
    return 0;
}

