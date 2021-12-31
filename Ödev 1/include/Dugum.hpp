#ifndef Dugum_hpp
#define Dugum_hpp
#include<iostream>
#include<string>

using namespace std;

// Dugum sınıfı oluşturuldu.
// Üyeleri tanımlandı.
class Dugum
{
public:
    Dugum(string veri);
    string veri;
    Dugum* sonraki;
    Dugum* onceki;
};

#endif