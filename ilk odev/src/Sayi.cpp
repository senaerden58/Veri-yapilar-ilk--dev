/** 
* @file Sayi.cpp
* @description Sayıları dosyadan okuma,basamaklara atama,menu işlemleri gibi fonksiyonları barındıran kaynak dosyasıdır.
* @course Veri Yapıları -1A
* @assignment 1.ödev
* @date 19.11.2023
* @author Sena ERDEN-sena.erden@ogr.sakarya.edu.tr-B211210041
*/#include <iostream>
#include <iomanip>
#include <fstream>
#include "SayiListesi.hpp"
#include "Basamak.hpp"
using namespace std;
Sayi sayi;
Sayi::Sayi()
{  
    string tutulanSayi = "";
    ilk = nullptr;
}

Sayi::~Sayi()
{
    Basamak *current = ilk;
    while (current != nullptr)
    {
        Basamak *silinecek = current;
        current = current->sonraki;
        delete silinecek;
    }
}

void Sayi::basamakAta()
{
    
    int okunanSayi;
    ifstream dosya("Sayilar.txt");
    if (!dosya)
    {
        cout << "Dosya açma hatasi!" << endl;
    }

    while (dosya >> okunanSayi)
    {
        Sayi* sayi=new Sayi();
        while (okunanSayi > 0)
        {
            int basamakDegeri = okunanSayi % 10;
            sayi->basamakEkle(basamakDegeri);
            sayi->tutulanSayi =  to_string(basamakDegeri) + sayi->tutulanSayi;
            okunanSayi = okunanSayi / 10;
        }
        
        sayiListesi.ekle(sayi);
        ilk=nullptr;
    } 
    dosya.close();
}
void Sayi::basamakEkle(int sayi)
{
    Basamak *eklenenDugum = new Basamak(sayi);
    if (ilk == nullptr)
    {
        ilk = eklenenDugum;
    }
    else
    {
       eklenenDugum->sonraki = ilk;
       ilk = eklenenDugum;
    }
}

void Sayi::basamaklariTersCevir()
{
    Basamak *prev = nullptr;
    Basamak *current = ilk;
    Basamak *next = nullptr;

    while (current != nullptr)
    {
        next = current->sonraki;  
        current->sonraki = prev; 

        prev = current;
        current = next;
    }

    ilk = prev; 
}

void Sayi::basamakYazdir(int sayac=0){

    Basamak* current = ilk;
    string yildiz = "*********  ";
    char yildizC = '*';
    while (current != NULL){
        if (sayac  == 1){
            cout <<"   *  " << current->veri << "    *  ";
        }else  if (sayac == 2)
        {
            cout << "   *  " << current->hafizaAdres() << "  *  ";
        }
        
        else{
            cout << "   " <<yildiz;
        }
        current = current->sonraki;
    }
    if (sayac == 1){
        cout <<endl;
        cout <<"#################";
        basamakYazdir();
    }


}

void Sayi::tekleriBasaAl(){
    Basamak* current = ilk;
    Basamak* prev = NULL;
    Basamak* next = NULL;
    while(current != NULL){
        if (current->veri %2 != 0 && current != ilk){
            if(current->sonraki == NULL){
                current->sonraki = ilk;
                ilk = current;
                prev->sonraki = NULL;

            }else{
                current->sonraki = ilk;
                ilk = current;
                prev->sonraki = next;
                current = prev;
            }
            
        
        }
        prev =  current;
        current = current->sonraki;
        if (current != NULL){
            next = current->sonraki;
        }
    }  
}

string Sayi::hafizaAdres(){
    stringstream ss;
    string hafiza;
    ss << &sayi;
    ss>>hafiza;
    return hafiza;
}

void Sayi::sayiTekAl(){
    tutulanSayi = "";
    Basamak* current = ilk;
    while (current !=NULL){
        tutulanSayi += to_string(current->veri);
        current = current->sonraki;
    }
    return;
}

void Sayi::sayiTersle(){
    string ters ="";
    for(int i=tutulanSayi.length() -1 ; i>=0;i--){
        ters  += tutulanSayi[i];
    }
    tutulanSayi = ters;
}