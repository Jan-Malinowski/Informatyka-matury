#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream in("Dane_PP/napisy.txt");
	string wyraz;
	ofstream outd("wyniki.txt", ios::app);
	
	int tab[17] = {0};
	
	while(in>>wyraz){
		tab[wyraz.size()]+=1;
	}
	outd << "d:\n";
	for(int i=2; i<17; i++){
		outd << i << " znaki: " << tab[i] << endl;
	}
	
	return 0;
}
