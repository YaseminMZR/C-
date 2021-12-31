/** 
* @Dugum.cpp
* @Dugum sınıfının kurucu fonksiyonunu tanımlar.
* @1.öğretim - C grubu 
* @1.Ödev
* @9.11.2021
* @Yasemin Muzıroğlu -  yasemin.muziroglu@ogr.sakarya.edu.tr
*/


#include"Dugum.hpp"
#include<string>

//Dugum sınıfının kurucu fonksiyonu 
Dugum::Dugum(string veri)
{
    this->veri = veri ;

    onceki = sonraki = 0 ;
    
}

