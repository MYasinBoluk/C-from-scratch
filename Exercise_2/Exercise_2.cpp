#include <iostream>
// static cast, operators, pointer
int main()
{
    float a = 10.02;
    a = static_cast<int>(5.9);
    char ch{ 97 };
    
    std::cout << static_cast<int>(ch)<<std::endl;
    /////////////////////////////////////////////////////
    int b = 10;
    int c = 20;
    int sonuc = ++b;
    std::cout << sonuc << std::endl;
    ///////////////////////////////////////
    int x = 10;
    int y = 23;
    int z = 23;
    int l = 10;
    int v = 23;
    int m = 10;
    int sonuc1 = x += y;
    int sonuc2 = z -= l;
    int sonuc3 = v %= m;
    std::cout << sonuc1 << std::endl << sonuc2 << std::endl << sonuc3 << std::endl;
    //////////////////////////////////////////////
    int p = 635;
    int* ptr = &p;

    std::cout << & ptr;
    



}
