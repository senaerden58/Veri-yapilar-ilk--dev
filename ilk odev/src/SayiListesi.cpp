/** 
* @file SayiListesi.cpp
* @description Sayiları yazdıran ve diğer menu işlemlerini yapan kaynak dosyasıdır. 
* @course Veri Yapıları -1A
* @assignment 1.ödev
* @date 19.11.2023
* @author Sena ERDEN-sena.erden@ogr.sakarya.edu.tr-B211210041
*/#include "SayiListesi.hpp"
#include "Dugum.hpp"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

SayiListesi sayiListesi;
SayiListesi::SayiListesi()
{
    ilk = nullptr;
}

SayiListesi::~SayiListesi()
{
    Dugum *current = ilk;
    while (current != nullptr)
    {
        Dugum *next = current->sonraki;
        delete current;
        current = next;
    }
    ilk = nullptr;
}

Dugum *SayiListesi::ilkSayi() const
{
    return ilk;
}

void SayiListesi::ekle(Sayi *anaSayi)
{
    Dugum *eklenenDugum = new Dugum(anaSayi);
    if (ilk == nullptr)
    {
       
        ilk = eklenenDugum;
    }
    else
    {
        Dugum *temp = ilk;
        while (temp->sonraki != nullptr)
        {
            temp = temp->sonraki;
        }
        temp->sonraki = eklenenDugum;
    }
}

void SayiListesi::yazdir()
{
   Dugum *temp = ilk;
   while (temp != NULL){

    Sayi *temp2 = temp->veri;
    string kare = "#################";
    cout << kare;
    temp2->basamakYazdir(0);
    cout<<endl;
    int bosluk = 14-temp2->hafizaAdres().length();
    cout <<  "#";
    for (int i=0;i < bosluk;i++)
	{
        cout << " ";
    }
    cout << temp<< "#";
    temp2->basamakYazdir(2);
    cout <<  endl;
    cout << "#---------------#";
    temp2->basamakYazdir(0);
    cout<<endl;
    bosluk = 15 - temp2->tutulanSayi.length();
    cout << "#";
    for(int i=0;i<bosluk;i++){
        cout << " ";
    }
    cout << temp2->tutulanSayi << "#"; 
    temp2->basamakYazdir(1);
    cout <<"\n\n";
    cout<<endl;

    temp = temp->sonraki;
   }  
}

void SayiListesi::enBuyukCikar() {
    if (ilk == NULL) {
        cout << "Liste bos." << endl;
        return;
    }
    int sayi = 0;
    int sayac = 0;
    Dugum* current = ilk;
    while(current != NULL){
        int current_sayi = stoi(current->veri->tutulanSayi);
        if(current_sayi > sayi){
            sayi = current_sayi;
            sayac +=1;
        }
        current = current->sonraki;
    }
    if (sayac == 1) {
        Dugum* temp = ilk;
        ilk = ilk->sonraki;
        delete temp;
    } else {
        current = ilk;
        Dugum* prev = NULL;
        while (current != NULL) {
            int current_sayi = stoi(current->veri->tutulanSayi);
            if (current_sayi == sayi) {
                if (prev == NULL) {
                    ilk = current->sonraki;
                } else {
                    prev->sonraki = current->sonraki;
                }
                delete current;
                current = prev->sonraki;
            } else {
                prev = current;
                current = current->sonraki;
            }
        }
    }
}

void SayiListesi::tersle(){
    Dugum* current = sayiListesi.ilk;
       while(current != NULL){
           current->veri->basamaklariTersCevir();
           current->veri->sayiTersle();
           current = current->sonraki;
       }
       sayiListesi.yazdir();
       return;
}

void SayiListesi::tekleriBasaAl(){
    Dugum* current = ilk;
    while(current != NULL){
        current->veri->tekleriBasaAl();
        current->veri->sayiTekAl();
        current = current->sonraki;        
    }
}