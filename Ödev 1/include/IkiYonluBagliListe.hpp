#ifndef IkiYonluBagliListe_hpp 
#define IkiYonluBagliListe_hpp
#include"Dugum.hpp"
#include<iostream>
#include<string>

// Sınıf tanımlandı.
// Public ve private öğeler yazıldı.
class IkiYonluBagliListe
{
public:
    IkiYonluBagliListe();
    ~IkiYonluBagliListe();
    void dugumEkle(int index, string veri);
    void dugumSil(int index);
    Dugum* sonDugumGetir();
    void yazdir();

private:

    Dugum* dugumGetir(int sira);
    Dugum* ilk;
    int dugumSayisi;




};



#endif