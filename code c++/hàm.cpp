#include<iostream>
#include<math.h>
using namespace std;
bool nt( int n ){
	for ( int i = 2; i <= sqrt(n); i++){
		if (n % i== 0)
		return false; 
		
		}
	return n>1;
}

	
	 

int main (){
	int n,m;cin >> n >> m;
	for (int i=n;i<=m;i++){
		if (nt(i)){
			cout << i << " ";
		}
	}
	return 0;
}
