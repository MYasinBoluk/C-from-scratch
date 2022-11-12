//Functions and factorial
#include <iostream>


void mesaj(char msg,char msg2) {
	std::cout << msg<<msg2<<std::endl;
	}


////////////////////////////
int topla(int sayi1, int sayi2) {
	return sayi1 + sayi2;

}

//////////////////


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

int main()
{
	mesaj('a', 'b');
	std::cout << topla(5, 5) << std::endl;
	int sayi;
	std::cout << "Bir sayi giriniz";
	std::cin >> sayi;
	
	std::cout << sayi, std::cout << "!=" , std::cout << fakt(sayi);

}