// bai 14 :Tính S(n) = x + x^3 + x^5 + … + x^2n + 1

#include<iostream> 
#include<math.h>
using namespace std;

int main() {
	int x,n;
	cout << " nhap x: ";
	cin >> x;
	do {
		cout << " nhap n: ";
		cin >> n;
		 
	} while ( n <= 1); 
	long long s = 0;
	   n = 2*n + 1; 
	for ( int i = 1 ; i <= n ; i++){
	 s += pow(x,i); 
	} 
	cout << " s = " << s; 
}
