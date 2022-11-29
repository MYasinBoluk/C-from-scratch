// Exercise_6.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;


        virtual void ates() = 0;
};

class Ak47 :public Silah{
    public:
        bool seriTek;
        int KayisUzunlugu;
        bool durbun;
    
        void ates() {
            std::cout << "tratata" << std::endl;
        }

};
class Pistol : public Silah {
    public:
        int kurmaKoluDeseni;

        void ates() {
            std::cout << "bam bam" << std::endl;
        }
        
        

};
class M1 :public Silah{
    public:
        bool seriTek;
        int KayisUzunlugu;
        int KurmaPozisyonu;

        void ates() {
            std::cout << "viirrrrrrreeeaaaa" << std::endl;
        }
};


void goster(Silah* silahptr) {
    
    std::cout << silahptr->isim;

        
}

void atesEt (Silah* silahPtr) {
    silahPtr->ates();
}

int main()
{
    Ak47 ak47;
    Pistol pistol;
    M1 m1;
    ak47.isim = "ak47: ";
    m1.isim = "m1: ";
    pistol.isim = "pistol: ";

    goster(&ak47);
    atesEt(&ak47);
    goster(&m1);
    atesEt(&m1);
    goster(&pistol);
    atesEt(&pistol);


   
    return 0;

}
