#include<iostream>
#include<math.h>
using namespace std;
//muon sang cac so nguyen so khong vuot qua n 
//phai taoj mot mang co kich thuoc n+1 phan tu
int prime[1000001];
void sieve(){
	// coi tat ca cac so tu 0 den n la so nguyen to 
	//prime[i] = 1
	//prime[i] = 0
	for (int i = 0 ; i <= 1000001 ; i ++){
		prime[i] = 1;
	}
		//loai 0 va 1 
		prime[0] = prime[1] = 0;
		for (int i = 2 ; i <= 1000; i++){
		
		// neu i la mot so nguyen to 
			if(prime[i]){
				for(int j = i*i ; j < 1000000; j += i){
					prime[j] = 0 ; //j khong con la so nguyen to nua
					
				}
			}
	    }
	}
int main(){
	sieve();
	int n;
	cin >> n;
	for(int i = 0 ; i <= n ; i++){
		if(prime[i]){
			cout << i << " ";
		}
	}
	return 0;
}
