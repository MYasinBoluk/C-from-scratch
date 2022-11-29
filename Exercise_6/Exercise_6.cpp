// Exercise_6.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

};

class Ak47 :public Silah{
    public:
        bool seriTek;
        int KayisUzunlugu;
        bool durbun;
    
        void atesEt() {

        }

};
class Pistol : public Silah {
    public:
        int kurmaKoluDeseni;

        void atesEt() {

        }
        
        

};
class M1 :public Silah{
    public:
        bool seriTek;
        int KayisUzunlugu;
        int KurmaPozisyonu;

        void atesEt() {

        }
};


void goster(Silah* silahptr) {
    
    std::cout << silahptr->isim;

        
}

int main()
{
    Ak47 ak47;
    ak47.isim = "Ak47";
    goster(&ak47);

    Pistol pistol;
    pistol.isim = "Pistol";
    goster(&pistol);
    M1 m1;
    m1.isim = "M1";
    goster(&m1);
    return 0;

}
