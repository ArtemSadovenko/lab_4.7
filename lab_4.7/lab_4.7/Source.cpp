#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double r, a, dx , xp, xk, x, eps, s = 0.0;
	int n;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	/*xp = 0.1;
	xk = 2;
	dx = 0.1;
	eps = 0.00001;*/

	cout << fixed;         
	cout << "-------------------------------------------------" << endl;         
	cout << "|" << setw(5) << "x" << "     |" << setw(10) << "ln(x)" << "   |" << setw(7) << "S" << "      |" << setw(5) << "n" << "   |" << endl;         cout << "-------------------------------------------------" << endl;


	x = xp;

	while (x <= xk) {
		n = 0;
		a = x - 1;
		s = a;
		do {
			n++;
			r = -(n * (x - 1.0)) / (n + 1.0);
			a *= r;
			s += a;
		} while (abs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(5) << log(x) << "   |" << setw(10) << setprecision(5) << s << "   |" << setw(5) << n << "   |" << endl << "-------------------------------------------------" << endl;;
		x += dx;
	}



	return 0;
}