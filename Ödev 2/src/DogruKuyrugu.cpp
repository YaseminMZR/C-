/** 
* @DogruKuyrugu.cpp
* @Öncelikli bir kuyruk olarak çalışır. Kurucu fonksiyonunda ilk pointer'ına sıfır değerini atar.
* Yıkıcı fonksiyonu kuyruğun içerisindeki verileri siler. 
* Sıralıekle fonksiyonu orijine uzaklığına göre noktaları kuyruğa ekler. 
* @1.öğretim - C grubu 
* @2..Ödev
* @24.12.2021
* @Yasemin Muzıroğlu -  yasemin.muziroglu@ogr.sakarya.edu.tr
*/




#include "DogruKuyrugu.hpp"
#include <iomanip>
DogruKuyrugu::DogruKuyrugu()
{
    ilk = son = 0;
}
DogruKuyrugu::~DogruKuyrugu()
{
    while (ilk != 0)
    {
        Dugum* gec = ilk;
        ilk = ilk->sonraki;
        delete gec;
    }
}


DogruKuyrugu* DogruKuyrugu::ekleSirali(DogruKuyrugu* r, Nokta n)
{
    if (r->ilk == 0)
    {
        r->ilk = new Dugum(n);
        r->son = r->ilk;
        return r;
    }
    if (r->ilk->veri.getUzaklik() > n.getUzaklik())
    {
        DogruKuyrugu* yeni = new DogruKuyrugu();
        yeni->ilk = new Dugum(n);
        yeni->ilk->sonraki = r->ilk;
        yeni->son = r->son;
        return yeni;
    }
    Dugum* gec = r->ilk;
    while (gec->sonraki != 0 && gec->sonraki->veri.getUzaklik() <= n.getUzaklik())
        gec = gec->sonraki;
    Dugum* yeni = new Dugum(n);
    yeni->sonraki = gec->sonraki;
    gec->sonraki = yeni;
    gec = r->ilk;
    while (gec->sonraki != 0)
        gec = gec->sonraki;
    r->son = gec;
    return r;
}

