#include <iostream>
#include <fstream>

using namespace std;

string lustro(string wyraz){
	string w = "";
	for(int i=0; i<wyraz.size(); i++){
		w+=wyraz[wyraz.size()-i-1];
	}
	return w;
}

int main(){
	ifstream in("Dane_PP2/slowa.txt");
	ifstream in2("Dane_PP2/nowe.txt");
	string wyraz, a, w;
	ofstream outa("wynik5.txt", ios::app);
	int ile1 = 0, ile2 = 0;
	outa << "b:\n";
	string tab[1000];
	
	for(int i=0; i<1000; i++){
		in >> tab[i];
	}

	for(int i=0; i<25; i++){
		in2 >> a;
		for(int j=0; j<1000; j++){
			if(a==tab[j]){
				ile1 += 1;
			}
		}
		w = lustro(a);
		for(int j=0; j<1000; j++){
			if(w ==tab[j]){
				ile2 += 1;
			}
		}
		outa << a << "  " << ile1 << " " << ile2 << endl;
		ile1 = 0;
		ile2=0;
	}
	
	return 0;
}

