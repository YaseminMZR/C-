/** 
* @main.cpp
* @Veri.txt dosyasından verileri okur , parçalar ve istenilene göre ilgili fonksiyonu çağırır. İşlem sonunda ortaya çıkan listeyi yazdırır.
* @1.öğretim - C grubu 
* @1.Ödev
* @9.11.2021
* @Yasemin Muzıroğlu -  yasemin.muziroglu@ogr.sakarya.edu.tr
*/

#include"IkiYonluBagliListe.hpp"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    //Veri.txt dosyası açıldı.
    // Veri.txt dosyası ana klasör dizinin içindedir.
    ifstream dosyadanOku("Veri.txt");
    string veriler;

    //İki yönlü bağlı liste sınıfından liste isimli bir sınıf oluşturuldu.
    IkiYonluBagliListe* liste = new IkiYonluBagliListe();

    // while döngüsünün içerisinde dosyadan satır satır okunan veriler , veriler stringine atandı.
    while(getline(dosyadanOku, veriler))
    {
        //veriler stringinin ilk karakteri E veya S olacaktır.
        // Bu hangi fonksiyonun çağrılacağını etkileyeceği için ilk karakter secim karakterine atandı
        char secim = veriler[0];

        // Eğer ekleme işlemi yapılacaksa if bloğu çalışır.
        if(secim == 'E')
        {

            //substr ile istenilen parçalara bölünen veri stoi ile int bir tipe dönüştürülür. 
            //Gerekli parçalama işlemlerinden elde edilen sonuçlar parametre olarak dugumEkle fonksiyonuna verilir.
            int index = stoi(veriler.substr(veriler.find('(')+1, veriler.find('#')-veriler.find('(')-1));
            string veri = veriler.substr(veriler.find('#')+1, veriler.find(')')-veriler.find('#')-1);
            liste->dugumEkle(index,veri);

        }
        //Eğer silme işlemi yapılacaksa else if bloğu çalışır.
        else if(secim == 'S')
        {

            //substr ile istenilen parçalara bölünen veri stoi ile int bir tipe dönüştürülür. 
            //Gerekli parçalama işlemlerinden elde edilen index parametre olarak dugumSil fonksiyonuna verilir.
            int index = stoi(veriler.substr(veriler.find('(')+1, veriler.find(')')-veriler.find('(')-1));
            liste->dugumSil(index);
        }
    }

    //verileri ekrana yazdıracak yazdir fonksiyonu çağrılır.
    liste->yazdir();
    
    //Veri.txt dosyası kapatıldı.
    dosyadanOku.close();
    return 0 ;

}