#include <iostream>
using namespace std;
int main() {
    int n;
    float i, pv, pmt, fv;
    cout << "N: ";   cin >> n;
    cout << "I: ";   cin >> i;
    cout << "PV: ";  cin >> pv;
    cout << "PMT: "; cin >> pmt;
    while(n-- > 0) {
        fv = fv*(1+(i/100))+pmt;
    }
    cout << "FV : " << fv << endl;
    return 0;
}
