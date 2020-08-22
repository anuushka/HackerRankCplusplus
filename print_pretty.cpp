#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout <<  setw(0) << left << showbase << nouppercase << std::hex;
        cout << (long long) A << '\n';
        cout << setfill('_') << setw(15) << showpos << fixed << setprecision(2)  << right << B << endl;
        cout << setprecision(9) << std::scientific << uppercase << noshowpos << C << '\n';
	}
	return 0;

}
