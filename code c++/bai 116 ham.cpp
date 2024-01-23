// Bài 116: viet chuong trinh nhap n và tính t?ng S = 1 + 2 + 3 + … + n
#include<iostream> 
#include<math.h>
#include<istream>  
using namespace std;
    int n ; 
	int s = 0;
	int i = 1; 

	 
	 
	int tong(){
		while ( i <= n){
		s += i;
		i++;  
	}
	return 0; 
}

	int main (){
		cout << " nhap n :";
		cin >> n;
		 
		tong();
		cout << " tong = " << s ;
		 
	}
