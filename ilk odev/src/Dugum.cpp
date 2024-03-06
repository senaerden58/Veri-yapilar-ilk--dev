/** 
* @file Dugum.cpp
* @description Sayıları ve sayıların adreslerini tutan kaynak dosyasıdır.
* @course Veri Yapıları -1A
* @assignment 1.ödev
* @date 19.11.2023
* @author Sena ERDEN-sena.erden@ogr.sakarya.edu.tr-B211210041
*/
#include <iostream>
#include "Dugum.hpp"
using namespace std;


Dugum::Dugum(Sayi* veri) 
{
	this->veri=veri;
	sonraki=NULL; 
}
