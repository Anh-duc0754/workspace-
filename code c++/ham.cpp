#include<iostream> 
#include<math.h>
#include<istream>  
using namespace std;
	string ten ;
	int toan;
	int van;
	float diemtrungbinh; 
 
	void nhap()
	{
		fflush(stdin); 
		cout << " nhap ten: " ;
		getline (cin , ten);
		
		cout << " nhap diem toan : ";
		cin >> toan ;
		
		cout << " nhap diem van : ";
		cin >> van;
		
	 } 
	 int  dtb()
	 {
	 	diemtrungbinh = (toan + van ) / 2.0  ; 
	 
	  
	  } 
	  void xuat(){
	  	cout << " ho ten :" << ten << endl;
		  cout << " diem toan :" << toan << endl ; 
		   cout << " diem van :" << van << endl; 
		   	cout << " diem trung binh :" << diemtrungbinh; 
	  } 
	  int main (){
	  	nhap();
		dtb();
		xuat(); 
		   
	  } 

