/** 
* @main.cpp
* @Noktalar.txt dosyasından verileri okur , parçalar, verilen koordinatlara göre noktanın orijine uzaklığını hesaplar,
* orijine olan yakınlığına göre kuyruğa ekler , noktaların arasındaki toplam mesafeleri hesaplar ve bu değerleri avl ağacına yerleştirip
* postorder olarak ekrana çıkartır. 
* @1.öğretim - C grubu 
* @2..Ödev
* @26.12.2021
* @Yasemin Muzıroğlu -  yasemin.muziroglu@ogr.sakarya.edu.tr
*/


#include <iostream>
#include <fstream>
#include <string>
#include "DogruKuyrugu.hpp"
#include "Nokta.hpp"
#include "AVLAgaci.hpp"

using namespace std;

int main()
{
    AVLAgaci agac ;
    // Dosya okunmaya başlanır.
    ifstream oku("Noktalar.txt");
    string satir;
    while(getline(oku, satir))
    {
        DogruKuyrugu* kuyruk = new DogruKuyrugu();
        int yer = 0;
        string koordinat;
        while ((yer = satir.find(" ")) != string::npos) {

            int x,y,z;
            koordinat = satir.substr(0, yer);
            x=stoi(koordinat);
            satir.erase(0, yer + string(" ").length());
            yer = satir.find(" ");
            koordinat = satir.substr(0, yer);
            y=stoi(koordinat);
            satir.erase(0, yer + string(" ").length());
            yer = satir.find(" ");
            koordinat = satir.substr(0, yer);
            z=stoi(koordinat);
            satir.erase(0, yer + string(" ").length());
            kuyruk = kuyruk->ekleSirali(kuyruk, Nokta(x, y, z));
        }
        int mesafe = 0;
        Dugum* gec = kuyruk->ilk;
        while (gec->sonraki!= 0)
        {
            mesafe += gec->veri - gec->sonraki->veri;
            gec = gec->sonraki;
                 
        }
        agac.kok = agac.ekle(mesafe,agac.kok);
        
    }
    //Dosya kapatılır. 
    oku.close();

    agac.postOrder(agac.kok);

    return 0;
}