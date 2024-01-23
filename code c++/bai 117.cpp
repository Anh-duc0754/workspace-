// B�i 117: Vi?t ch��ng tr?nh nh?p n v� t�nh t?ng S(n) = x + x^2 + x^3 + � + x^n
#include <iostream>
#include <math.h>

using namespace std;
int x, n;
long long s = 0;
int i = 1;

int tong()
{
	for (int i = 1; i <= n; i++)
		s += pow(x, i);
	return s;
}
int main()
{
	cout << " nhap n :";
	cin >> n;
	cout << " nhap x :";
	cin >> x;
	int ketqua = tong();
	cout << "tong = " << ketqua;
}
