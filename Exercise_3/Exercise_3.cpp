//Functions and factorial
#include <iostream>
#include <string>

void mesaj(char msg,char msg2) {
	std::cout << msg<<msg2<<std::endl;
	}


////////////////////////////
int topla(int sayi1, int sayi2) {
	return sayi1 + sayi2;

}
//////////////////
void print(std::string text="\n",int=0,bool as=false) {
	std::cout << text;
}



///////////////////////////
int fakt(int sayi) {
	int i = 1;
	int toplam=1;
	while (i <= sayi) {
		;
		toplam = i * toplam;
		i++;
		
	}
	return toplam;
}
/////////////////
int carp(int p, int l) {
	return p * l;
}

int getir(int(*fint)(int, int)) {
	int p = fint(10, 10);
	return p;

}
//////////////////
inline int bol(int e, int r) {
	return e / r;
}


//////////////////////////

int main()
{
	mesaj('a', 'b');
	std::cout << topla(5, 5) << std::endl;
	int sayi;
	std::cout << "Bir sayi giriniz";
	std::cin >> sayi;
	
	std::cout << sayi, std::cout << "!=" , std::cout << fakt(sayi)<<std::endl;
	
	print();
	int l = getir(carp);
	std::cout << l<<std::endl;
	std::cout << bol(10, 2);
}
//////////////////////////////////////////////// 

