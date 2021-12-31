#ifndef Nokta_hpp
#define Nokta_hpp

//Nokta sınıfı ve fonksiyon tanımları
class Nokta
{
public:
    Nokta();
    Nokta(int _x, int _y, int _z);
    int operator-(Nokta nokta);
    int getUzaklik();

private:
    int x, y, z;
    int orijineUzaklik;

};

#endif