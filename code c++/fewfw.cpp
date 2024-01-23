#include <iostream>
using namespace std;

int main()
{
    int sodu  = 300000000;
    int su_lua_chon;
    int sotien;
	int check; 
	int ktra;
	int i = 1;
	string matkhau = "123456"; 
    string input;
        cout << "Chao mung ban den voi ATM" << endl;
         cout << "nhap mat khau : ";
         cin >> input;
            if (input == matkhau ) {
			    cout << "tiep tuc chuong trinh" << endl;
		   }else{   
				cout << "mat kkhau sai " << endl;
				for ( int i = 1; i <= 5 ; i++ ) {
				cout << " nhap lai mat khau:";		
				cin >> input;
				    if ( input == matkhau ){
					cout << "mat khau dung" << endl;
					break;} 
			}if ( input != matkhau){
				cout << "khoa tai khoan " << endl; 
				exit(1);} 
            }
	do{
        cout << "1. Tra cuu tai khoan" << endl;
        cout << "2. Gui tien" << endl;
        cout << "3. Rut tien" << endl;
        cout << "4. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> su_lua_chon;

        switch (su_lua_chon)
        {
            case 1:
                cout << "So du tai khoan cua ban la: " << sodu << endl;
                break;
            case 2:
                cout << "Nhap so tien muon gui: ";
                cin >> sotien, sodu += sotien;
                cout << "So du tai khoan cua ban la: " << sodu  << endl;
                cout << "gui tien thanh cong " << endl;
                break;
            case 3:
                cout << "Nhap so tien muon rut: ";
                cin >> sotien;
                    if (sotien > sodu){
                        cout << "So du tai khoan khong du de rut tien." << endl;
                    }else{
                    	sodu -= sotien;
                        cout << "giao dich thanh cong thanh cong " << endl;
                        cout << "So du tai khoan cua ban la: " <<  sodu << endl; }
                         break;
            case 4 : 
                cout << "ket thuc " << endl;
                exit(1);
            default : 
                cout << "sai cu phap" << endl;
        }
                cout << "ban co muon tiep tuc giao dich  :" ;
                cin >> check; 
                if ( check != 0){
      	            cout << " tiep tuc chuong trinh" << endl;
                }else {
	  	            cout << "ket thuc chuong trinh";
	  	            exit(1);
	  }
}while(su_lua_chon != 4);
	cout << "ket thuc chuong trinh"; 

    return 0;
}
