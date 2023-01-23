/* kullanıcıdan tek bir dizinin eleman sayısını girmesini isteyen; kullanıcının girdiği sayı kadar kullanıcıdan dizi elemanlarını girmesini isteyen; girilen bu elemanları diziye atayan; dizi elemanlarını birer boşluk arayla yan yana yazdıran; dizinin elemanlarının toplamını ve ortalamasını ekrana yazdıran programın:
I. Adımlar halinde algoritmasını yazınız (20P)
2. Akis diyagramını yazınız (20P)
3. c++ dili ile kodunu yazınız (60p)
*/
#include <iostream>
using namespace std;
int main(){
	int eleman_s; 
	double toplam=0, ortalama;
	cout << "Eleman sayısı giriniz" << endl;
	cin >> eleman_s;
	double dizi[eleman_s];
	cout << "Dizi elemanlarını giriniz" << endl;
	for(int i=0; i < eleman_s; ++i){
		cin >> dizi[1];

	}
	cout << "Dizi elemanları";
	for(int i=0; i < eleman_s; ++i){
		cout << dizi[i] << " ";
		toplam = toplam + dizi[i];
	}
	cout << endl << "Dizi elemanlarının toplamı: " << toplam;
}
