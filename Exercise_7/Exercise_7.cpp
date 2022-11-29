// Exercise_7.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Hayvan {
public:
	virtual void sescal() = 0;
	
};

class Kopek:public Hayvan {
public:
	void sescal() {
		std::cout << "Hav";
	}
};

class Kedi :public Hayvan {
public:
	void sescal() {
		std::cout << "Miyav";
	}
};

class Ordek :public Hayvan {
public:
	void sescal() {
		std::cout << "Hav";
	}
};

class Fare :public Hayvan {
public:
	void sescal() {
		std::cout << "vik";
	}
};

void tumsescal(Hayvan* hptr) {
	hptr->sescal();

}

int main()
{
	Kopek kopek;
	Kedi kedi;
	Ordek ordek;
	Fare fare;
	tumsescal(&fare);
}

