/** 
* @IkıYonluBagliListe.cpp
* @İki yönlü bağlı liste sınıfının fonksiyon gövdelerini tanımlar.
* @1.öğretim - C grubu 
* @1.Ödev
* @12.11.2021
* @Yasemin Muzıroğlu -  yasemin.muziroglu@ogr.sakarya.edu.tr
*/


#include"IkiYonluBagliListe.hpp"
#include<iostream>
#include<string>

using namespace std;

// İki yönlü bağlı liste sınıfının kurucu fonksiyonu 
IkiYonluBagliListe::IkiYonluBagliListe()
{
    ilk = 0 ;
    dugumSayisi = 0 ;
}

// İki yönlü bağlı liste sınıfının yıkıcı fonksiyonu
IkiYonluBagliListe::~IkiYonluBagliListe()
{
    Dugum* gec = ilk;
    while(gec!=0)
    {
        Dugum* silinecek = gec;
        gec = gec->sonraki;
        delete silinecek;

    } 
}

// Parametre olarak verilen değere göre listenin ilgili düğümünü döndürür.
Dugum* IkiYonluBagliListe::dugumGetir(int sira)
{
    Dugum* gec = ilk;


    while(sira>=0&&gec!=0)
    { 
        if(sira==0)
            return gec;
        gec = gec->sonraki;

        sira--;
    }
    
    return gec;
}

// Diğer fonksiyonlardaki işlem kalabalığını azaltmak için tasarlandı. 
//Çağrıdığı yere iki yönlü bağlı listenin son düğümünü döndürür.
Dugum*  IkiYonluBagliListe::sonDugumGetir()
{
    Dugum* gec = ilk ;
    while(gec->sonraki !=0)
    {
        gec = gec->sonraki;
    }
    return gec;
}

//Ödevde istenilen düğüm ekleme fonksiyonu
//Eklemesi gereken indisi ve eklenecek veriyi parametre olarak alır.
//Eğer eklenmek istenilen indis bulunmuyorsa bağlı listenin sonuna ekler.
void  IkiYonluBagliListe::dugumEkle(int index , string veri )
{
    Dugum* yeniDugum = new Dugum(veri);

    if(ilk == 0)
    {
        ilk = yeniDugum;
    }

    else
    {
        if(index == 0)
        {
            yeniDugum->sonraki = ilk;
            ilk->onceki=yeniDugum;  
            ilk = yeniDugum;
        }
        else if(index <= dugumSayisi - 1)
        {
            yeniDugum->sonraki = 0 ; 
            yeniDugum->onceki = sonDugumGetir();
            sonDugumGetir()->sonraki = yeniDugum;
            Dugum* gec = sonDugumGetir();

            while(gec != dugumGetir(index))
            {
                gec->veri = gec->onceki->veri;
                gec=gec->onceki;
            }
            gec->veri = veri;
        }
        else
        {
            Dugum* gec = ilk;
            while(gec->sonraki !=0)
            {
                gec = gec->sonraki;
            }
            gec->sonraki = yeniDugum;
            yeniDugum->onceki = gec;
        }
        
    }
    dugumSayisi++;


}


//Ödevde istenilen düğüm silme fonksiyonu
//Parametre olarak aldığı index değerinde bulunan düğümü siler.
//Eğer o indis yoksa en sondaki düğümü siler. 
void  IkiYonluBagliListe::dugumSil(int index)
{
    if(dugumSayisi == 0 ) return;
    if(ilk->sonraki==0)
    {
        delete ilk;
        ilk=0;
    }
    else
    {
        if(index<= dugumSayisi-1)
        {
            Dugum* gec = dugumGetir(index);
            while(gec->sonraki !=0)
            {
                gec->veri=gec->sonraki->veri;
                gec = gec->sonraki;
            }
             
            gec = gec->onceki;
            delete gec->sonraki ;
            gec->sonraki = 0;
        }
        else
        {
            Dugum* gec = ilk ;
            while(gec->sonraki->sonraki!=0)
            {
                gec = gec->sonraki;
            }
            delete gec->sonraki;
            gec->sonraki = 0;            

        }
    }
dugumSayisi--;
    
}


// İşlemler bittikten sonra en son çağrılan fonksiyon 
// En son oluşan iki yönlü bağlı listenin yerlerini sırayla ekrana yazdırır.
void IkiYonluBagliListe::yazdir()
{
    Dugum* gec = ilk ;
    while(gec->sonraki !=0)
    {
        cout<<gec->veri<<"<-->";
        gec = gec->sonraki;
    }
    cout<<gec->veri<<endl;
}

