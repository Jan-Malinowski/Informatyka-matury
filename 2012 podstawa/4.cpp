#include <iostream>
#include <fstream>

using namespace std;

int suma_cyfr(int liczba){
	int suma=0;
	while(liczba>0){
		suma+=liczba%10;
		liczba = liczba/10;
	}
	return suma;
}

int main(){
	ifstream in("Dane_PP/cyfry.txt");
	int liczba, max, min;
	ofstream outa("wynik4a.txt");
	ofstream outb("wynik4b.txt", ios::app); //dopisuje
	ofstream outc("wynik4c.txt");
	
	int i=0;
	
	in >> liczba;
	min=max=liczba;
	
	while(in>>liczba){
		if(liczba%2==0){
			i+=1;
		}
		if(suma_cyfr(liczba)>suma_cyfr(max)){
			max=liczba;
		}
		if(suma_cyfr(liczba)<suma_cyfr(min)){
			min=liczba;
		}
	}
	outa << i;
	outb << max << endl << min;

	
	return 0;
}
