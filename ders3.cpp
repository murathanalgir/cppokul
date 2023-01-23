#include <iostream>
using namespace std;

int main(){
	int s;
	double total=0, avarage
		cout << "Eleman sayisi giriniz" << endl;
		cin >> s;
		double dizi[s];
		cout << "Eleman sayisi giriniz" << endl;
		for (int i=0; i < s; ++i){
			cin >> dizi[1];
		}
		cout << "Dizi Elemanlari";
		for(int i=0; i < s; ++i){
			cout << dizi[i] << "";
			total = total + dizi[i];
		}
		cout << endl << "Dizi elemanlarinin toplami: " << total;
}
