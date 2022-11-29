// Exercise_8.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Kitap {
public:
	static int adet;
	Kitap() {
		adet++;

	}
	static int get() {
		return adet;

	}
};
int Kitap::adet = 0;


int main()
{
	Kitap kitap;
	Kitap kitap2;
	Kitap kitap3;
	Kitap kitap4;
	Kitap kitap5;
	kitap5.get();
	std::cout << Kitap::get();

}
