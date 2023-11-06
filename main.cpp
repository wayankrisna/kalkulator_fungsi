#include <iostream>
#include <stdlib.h>
using namespace std;

//fungsi aritmatika
float penjumlahan(float a,float b){
	return a+b;
}

float pengurangan(float a,float b){
	return a-b;
}

float perkalian(float a, float b){
	return a*b;
}

float pembagian(float a,float b){
	return a/b;
}



int main(){



	float a,b;
	int pilihan;
	string ulang;

    do {

    system ("CLS");

	cout<<"Program C++ Kalkulator dengan Fungsi"<<endl;
	cout<<"------------------------------------"<<endl;

	cout<<"PILIH OPERASI ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl<<endl;
	cout <<"Masukkan Pilihan (1-4) : ";

	cin>>pilihan;
	cout<<endl;

	if (pilihan>=1 && pilihan<=4){

		cout<<"Masukan bilangan pertama : ";
		cin>>a;

		cout<<"Masukan bilangan kedua   : ";
		cin>>b;
		cout<<endl;
		switch(pilihan){
			case 1 :
			    cout<<a<<" + "<<b<<" = "<<penjumlahan(a,b);
			    break;
			case 2 :
			    cout<<a<<" - "<<b<<" = "<<pengurangan(a,b);
			    break;
			case 3 :
			    cout<<a<<" * "<<b<<" = "<<perkalian(a,b);
                break;
			case 4 :
			    cout<<a<<" / "<<b<<" = "<<pembagian(a,b);
			    break;
		}
        cout <<endl
        << "Ingin Mengulangi Lagi? y/t" << endl;
        cin >> ulang;
	}
	else {
		cout<<"Pilihan Tidak Tersedia"<<endl;
        cout <<endl
        << "Ingin Mengulangi Lagi? y/t" << endl;
        cin >> ulang;
	}


	}
	while (ulang == "y" || ulang == "Y");

    return 0;

}
