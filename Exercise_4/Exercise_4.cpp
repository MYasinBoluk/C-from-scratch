// Exercise_4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    char islem = '+';
    while (true) {
        std::cout << "Birinci sayiyi giriniz:" << std::endl;

        std::cin >> a;
        std::cout << "ikinci sayiyi giriniz:" << std::endl;

        std::cin >> b;
        std::cout << "Yapilicak islemi giriniz" << std::endl;
        std::cin >> islem;

       /* if (islem == 'e') {
            continue;
        }
        if (islem == 'e') {
            break;
        }*/

        if (islem == 'e') {
            goto stop;
        }



        switch (islem) {
        case '+':
            std::cout << "Sonuc:" << a + b;
            break;
        case '-':
            std::cout << "Sonuc:" << a - b;
            break;
        case '*':
            std::cout << "Sonuc:" << a * b;
            break;
        case '/':
            std::cout << "Sonuc:" << a / b;
            break;
        default:
            std::cout << "Hatali islem secimi";
            break;

        }


    } 
    stop:
    std::cout<<"Durdu";

    /*for (int i = 1; i <= 10; i++)
    {
        std::cout << "Dongu" << i<<std::endl;
    }*/

   

    /*if (islem == '+') {
        std::cout << "Sonuc:" << a + b;

    }
    else {
        std::cout << "islem yok";
    }*/

}
