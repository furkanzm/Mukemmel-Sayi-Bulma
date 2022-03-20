#include<iostream>
using namespace std;
int main() {
	float sayi, kontrol;
	int toplam = 0;

	cout << " >> Bir sayi girin: ";
	cin >> sayi;
	cout << "\n" << sayi << " sayisinin kendisi haric pozitif tam bolenleri; ";
	for (int i = 1; i < sayi; i++) {
		kontrol = sayi / i;
		if (kontrol == int(kontrol)) {
			cout << i << ", ";
			toplam += i;
		}
	}

	if (toplam == sayi) {
		cout << "\nGirdiginiz sayi bir MUKEMMEL SAYI!\n\n";
	}
	else {
		cout << "\nGirdiginiz sayi ne yazik ki bir mukemmel sayi DEGIL!\n\n";
	}

	return main();
}