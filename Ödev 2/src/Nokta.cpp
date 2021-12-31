/** 
* @Nokta.cpp
* @Kurucu metodunda koordinatları x, y ve z'ye atar ve orjinine uzaklığı hesaplar. 
* Ayrıca operatörü aşırı yükleyerek iki nokta arasındaki uzaklığı hesaplar.  
* @1.öğretim - C grubu 
* @2..Ödev
* @24.12.2021
* @Yasemin Muzıroğlu -  yasemin.muziroglu@ogr.sakarya.edu.tr
*/



#include "Nokta.hpp"
#include "math.h"

using namespace std;

Nokta::Nokta() { }

Nokta::Nokta(int _x, int _y, int _z) :x(_x), y(_y), z(_z)
{
    orijineUzaklik = int(sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)));
}

int Nokta::operator-(Nokta nokta)
{
    return int(sqrt(pow(x - nokta.x, 2) + pow(y - nokta.y, 2) + pow(z - nokta.z, 2)));
}

int Nokta::getUzaklik()
{
    return orijineUzaklik;
}

