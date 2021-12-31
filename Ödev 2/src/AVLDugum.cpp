/** 
* @AVLDugum.cpp
* AVL Ağacına eklenecek verilerin düğüm sınıfıdır.Kurucu fonksiyonu parametre olarak aldığı veriyi düğümün içerisine atar ve 
* düğümün sağ ve sol pointerlarına varsayılan olarak 0 değerini atar.
* @1.öğretim - C grubu 
* @2..Ödev
* @25.12.2021
* @Yasemin Muzıroğlu -  yasemin.muziroglu@ogr.sakarya.edu.tr
*/



#include "AVLDugum.hpp"

AVLDugum::AVLDugum(int veri)
{
    this->veri = veri;
    sol = sag = 0;
}