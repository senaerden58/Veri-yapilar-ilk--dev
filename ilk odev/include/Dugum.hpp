/** 
* @file Dugum.hpp
* @description Dugum.cpp'nin başlık dosyasıdır.
* @course Veri yapıları -1A
* @assignment 1.odev
* @date 19.11.2023
* @author Sena Erden-sena.erden@ogr.sakarya.edu.tr - B211210041
*/

 #ifndef Dugum_hpp
#define Dugum_hpp
#include "Sayi.hpp"
class Dugum
{
public:
    Dugum(Sayi * veri);
    Sayi* veri;
    Dugum *sonraki;

};


#endif


