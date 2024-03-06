/** 
* @file Test.cpp
* @description diğer dosyalardaki fonksiyonları,işlevleri çağıran dosyadır.
* @course Veri Yapıları -1A
* @assignment 1.ödev
* @date 19.11.2023
* @author Sena ERDEN-sena.erden@ogr.sakarya.edu.tr-B211210041
*/#include <iostream>
#include <string>
#include "SayiListesi.hpp"
using namespace std;


int main()
{   
    Sayi sayi;
    sayi.basamakAta();
    int secim;
	  sayiListesi.yazdir();
    do
    {
  
    cout <<"\n\n\n";
    cout << "1. Tekleri basa al\n2. Basamaklari Tersle\n3. En buyugu cikar\n4. Cikis" <<endl;
    cin >> secim;

    if(secim == 1){
        sayiListesi.tekleriBasaAl();
        sayiListesi.yazdir();

    }else if (secim == 2)
    {
        sayiListesi.tersle();
    }else if (secim == 3)
    {
        sayiListesi.enBuyukCikar();
        sayiListesi.yazdir();
    }else if (secim == 4)
    {
        cout << "Cikis yapildi";
        exit(0);
    }else{
        cout <<" Tekrar deneyin yanliş secim";
    }

    } while (secim);
    
    
    

    

	return 0;
}
