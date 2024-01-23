//Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)

#include<iostream> 
#include<math.h>
using namespace std;

int main() {
	int n;
	cout << " nhap n: ";
	cin >> n;
	float s = 0;
	 
	for ( int i = 1; i <= n ; i++){
		s += 1.0 /( i * ( i + 1) ); 
	} 
	cout << " s = "<< s;
}
