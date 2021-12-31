#ifndef DogruKuyrugu_hpp
#define DogruKuyrugu_hpp
#include<iostream>
#include "Dugum.hpp"
using namespace std;

// Doğru kuyruğu sınıfı ve fonksiyon tanımları 
class DogruKuyrugu
{
public:
	DogruKuyrugu();
	~DogruKuyrugu();
	DogruKuyrugu* ekleSirali(DogruKuyrugu* r, Nokta n);
	Dugum* ilk;
	Dugum* son;
};

#endif