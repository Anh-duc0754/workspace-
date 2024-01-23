// Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N

#include<iostream> 
#include<math.h>
using namespace std;

int main() {
	int n;
	cout << " nhap n: ";
	cin >> n;
	int  s = 0;
	int p = 1; 
	for ( int i =1 ; i <= n; i++){
		p *= i; 
// bien p de lua phep giai thua cua i ; vd n = 2 p = 2*1 =2 ; gán 2 cho p ; n = 3 p = p * 3  
		s += p; 
	}
	cout << s;
}
