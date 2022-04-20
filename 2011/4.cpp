#include <iostream>
#include <fstream>

using namespace std;

bool palindrom(string a){
	int x = a.size();
	for(int i=0; x/2>i; i++){
		if(a[i]!=a[x-1-i]){
			return false;
		}
	}
	return true;
}

bool sum_ascii(string a){
	int x = a.size();
	for(int i=1; i<x; i++){
		if(int(a[i])+int(a[i-1])==220){
			return true;
		}
	}
	return false;
}

int main(){
	ifstream czytam("Dane_PP/hasla.txt");
	string wyraz;
	ofstream wpisz("wynik4a.txt");
	ofstream wpisz1("wynik4b.txt");
	ofstream wpisz2("wynik4c.txt");
	int ilep=0, ilen=0;
	
	while(czytam>>wyraz){
		if(wyraz.size()%2==0){
			ilep+=1;
		}
		else{
			ilen+=1;
		}
		if(palindrom(wyraz)){
			wpisz1<<wyraz<<endl;
		}
		if(sum_ascii(wyraz)){
			wpisz2<<wyraz<<endl;
		}	
	}
	wpisz<<ilep<<endl;
	wpisz<<ilen<<endl;

	return 0;
}
