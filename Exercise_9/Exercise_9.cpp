// Exercise_9.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Payment {
	private:
		float tutar=0;
	public:
		std::string paraBirimi;

		void setTutar(float t) {
			if (t > 0) {
				tutar = t;

			}
			else {
				tutar = 0.1;
			}
		}
		void pay() {
			std::cout << tutar << ":Odeme alindi";
		}
		//friend void degistir(Payment* paymentPtr);
		friend class Test;
};
//void degistir(Payment* paymentPtr) {
//	paymentPtr->tutar = -10;
//}
///////////////////////////////////////////////
class Test {
public:
	void degistir(Payment* payment) {
		payment->tutar = -10;
	}
};

int main()
{
	Payment payment;
	/*degistir(&payment);*/
	Test test;
	test.degistir(&payment);
	payment.paraBirimi = "tl";
	payment.pay();
}
