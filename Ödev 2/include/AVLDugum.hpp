#ifndef AVLDugum_hpp
#define AVLDugum_hpp

//AVLDugum sınıfının fonksiyon ve değişken tanımlamaları burada yapılır.
class AVLDugum
{
public:
    AVLDugum(int veri);
    int veri;
    AVLDugum* sol;
    AVLDugum* sag;
};

#endif