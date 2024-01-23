//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2

#include<iostream> 
#include<math.h>
using namespace std;

int main() {
	int n;
	do{
	
	cout << "nhap n :";
	cin >> n;
}while ( n <= 0);
	int s = 0;
	for ( int i = 0 ; i <= n; i++ ){
		s += pow(i,2); 
	} 
	cout << " s = " << s;
}
