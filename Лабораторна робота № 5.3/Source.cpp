#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double kp, kk, p;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
		double dk = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		p = z(1 - k * k) + pow(1 + z(k), 2);
		cout << k << "  " << p << endl;
			k += dk;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (1-sin(x)) / (exp(x) + cos(x)*cos(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = (1 / exp(-x)) * a;
		do
		{
			j++;
			double R = (pow(-1, j)) * x / 2 * j * pow(-1, j - 1);
			a *= R;
			S += (1 / exp(-x)) * a;
		} while (j < 7);
		return S;
	}
}