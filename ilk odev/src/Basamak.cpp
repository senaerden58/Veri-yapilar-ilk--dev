/** 
* @file Basamak.cpp
* @description Basamak verilerini ve basamak adreslerini tutan kaynak dosyadır.
* @course Veri Yapıları -1A
* @assignment 1.ödev
* @date 19.11.2023
* @author Sena ERDEN-sena.erden@ogr.sakarya.edu.tr-B211210041
*/
#include "Basamak.hpp"
#include <iostream>
#include <iomanip>
#include <string>
using namespace  std;
Basamak::Basamak(int veri)
{ 
    this->veri = veri;
    sonraki = nullptr;
}
string Basamak::hafizaAdres(){
    stringstream ss;
    string hafiza;
    ss << &veri;
    ss >> hafiza;
    return hafiza.substr(hafiza.length() -3 ,3);
}

Basamak::~Basamak() {}


