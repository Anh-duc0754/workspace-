//B�i 7: T�nh S(n) = � + 2/3 + � + �. + n / n + 1

#include<iostream> 
#include<math.h>
using namespace std;

int main() {
	int n;
	cout << " nhap n: ";
	cin >> n;
	float s = 0;
	
	for ( int i = 1 ; i <= n ; i++){
		
			s  += (float)i / (i + 1 ); 
		
	} 
	cout << s ;
}
