/** 
* @Dugum.cpp
* @Kuyruğa eklenecek verilerin düğüm sınıfıdır.Parametre olarak aldığı veriyi düğümün verisine atar ve
* varsayılan olarak sonraki pointer'ına sıfır değerini atar.
* @1.öğretim - C grubu 
* @2..Ödev
* @24.12.2021
* @Yasemin Muzıroğlu -  yasemin.muziroglu@ogr.sakarya.edu.tr
*/



#include "Dugum.hpp"
Dugum::Dugum(Nokta veri)
{
    this->veri = veri;
    sonraki = 0;
}