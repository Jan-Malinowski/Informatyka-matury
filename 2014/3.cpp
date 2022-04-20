#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream in("NAPIS.txt");
	string wyraz;
	int ile=0;
	ofstream outa("zadanie5.txt", ios::app);
	
	string tab[1000];
	

	for(int i=0; i<1000; i++){
		in>>wyraz;
		tab[i]=wyraz;
	}
	
	for(int i=0; i<1000; i++){
		for(int j=0; j<1000; j++){
			if(tab[i]==tab[j]){
				ile+=1;
			}
	}
	
	cout << ile;
	
	return 0;
}

