#include<iostream> 
#include<math.h>
using namespace std;

int main() {
	int n;
		cout << " nhap n : ";
		cin >> n ;
		 
	
	float s = 0;
	n = 2*n;
	for ( int i = 2 ; i <= n ; i+=2){
		s += 1.0/i; 
	}
	cout << " s = " << s;
}
