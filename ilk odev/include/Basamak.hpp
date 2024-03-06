/*
* @file Basamak.hpp
* @description Basamak.cpp'nin başlık dosyasıdır.Veri yapıları 1. ödev
* @course Veri yapıları 1-A
* @assignment 1.
* @date 19.11.2023
* @author Sena Erden -sena.erden@ogr.sakarya.edu.tr-B211210041
*/
#ifndef BASAMAK_HPP
#define BASAMAK_HPP

#include <iostream>
using  namespace std;

class Basamak {
public:
    Basamak(int veri);
    ~Basamak();
    int veri;
    Basamak* sonraki;
    string hafizaAdres();
};

#endif



