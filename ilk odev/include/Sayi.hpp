/** 
* @file Sayi.hpp
* @description Sayi.cpp'nin başlık dosyasıdır.
* @course Veri Yapıları -1A
* @assignment 1.ödev
* @date 19.11.2023
* @author Sena ERDEN-sena.erden@ogr.sakarya.edu.tr-B211210041
*/
#ifndef SAYI_HPP
#define SAYI_HPP
#include "Basamak.hpp"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Sayi{
public:
	string tutulanSayi;
	Basamak *ilk;
	Basamak *ilkEleman() const;
	Basamak *basamakListesi;
	Basamak *BasamaklariBul(int sayi);
	Sayi();
	~Sayi();
	friend ostream &operator<<(ostream &screen, const Sayi &sag);
	int ilkElemaniBul() const;
	bool bosMu() const;
	void basamakAta();
	void basamakEkle(int sayi);
	void tekleriBasaAl();
	void basamaklariTersCevir();
	void basamakYazdir(int sayac);
	string hafizaAdres();
	void sayiTekAl();
	void sayiTersle();

};

#endif
