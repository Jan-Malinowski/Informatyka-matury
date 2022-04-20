#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream in("Dane_PP2/slowa.txt");
	string wyraz;
	ofstream outa("wynik5.txt", ios::app);
	
	int tab[13] = {0};
	
	while(in>>wyraz){
		tab[wyraz.size()]+=1;
	}
	outa << "a:\n";
	for(int i=0; i<13; i++){
		outa << i << " -- " << tab[i] << endl;
	}
	
	return 0;
}

