/** 
* @file SayiListesi.hpp
* @description SayiListesi.cpp'nin başlık dosyasıdır.
* @course Veri Yapıları -1A
* @assignment 1.ödev
* @date 19.11.2023
* @author Sena ERDEN-sena.erden@ogr.sakarya.edu.tr-B211210041
*/
#ifndef SAYILISTESI_HPP
#define SAYILISTESI_HPP
#include "Dugum.hpp"
#include "Basamak.hpp"
#include <iostream>
using namespace std;
class SayiListesi 
{
public:    
    Dugum* ilk;
    Dugum* ilkSayi()const;
    void basamakAta();
    SayiListesi();
    ~SayiListesi();
    bool bosMu() const;
    friend ostream& operator<<(ostream& screen, const SayiListesi& sag);
    void ekle(Sayi *anaSayi);
    void basamaklariYazdir(int sayiAdeti);
    void yazdir();
    void adresYazdir();
    int countDigits(Basamak *sayi);
    void enBuyukCikar();
    int enBuyukBul();    
    void tersle();
    void tekleriBasaAl();
};
extern SayiListesi sayiListesi;

#endif
