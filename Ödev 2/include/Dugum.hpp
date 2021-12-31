#ifndef Dugum_hpp
#define Dugum_hpp
#include "Nokta.hpp"

// Dugum sınıfı ve fonksiyon tanımları
class Dugum
{
public:
    Dugum(Nokta veri);
    Nokta veri;
    Dugum* sonraki;
};

#endif