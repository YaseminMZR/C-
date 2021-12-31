#ifndef AVLAgaci_hpp
#define AVLAgaci_hpp
#include<iostream>
#include "AVLDugum.hpp"
using namespace std;

// AVLAgaci sınıfının fonksiyon tanımları burada yapılır.
class AVLAgaci
{
public:

	AVLAgaci();
	~AVLAgaci();
	AVLDugum* solaDondur(AVLDugum* dugum);
	AVLDugum* sagaDondur(AVLDugum* dugum);
	void postOrder(AVLDugum* index);
	int yukseklik(AVLDugum* aktifDugum);
	AVLDugum* ekle(int veri, AVLDugum* aktifDugum);
	AVLDugum* kok;
};
#endif