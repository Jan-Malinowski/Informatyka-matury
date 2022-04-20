#include <iostream>
#include <fstream>

using namespace std;

bool rosnaca(string a){
	int liczba = a[0];
	for(int i=1; i<a.size(); i++){
		if(liczba<a[i]){
			liczba=a[i];
		}
		else{
			return false;
		}
	}
	return true;
}

int main(){
	ifstream in("NAPIS.txt");
	string wyraz;
	int ile=0;
	ofstream outa("zadanie5.txt", ios::app);
	
	outa << "b:\n";
	
	while(in>>wyraz){
		if(rosnaca(wyraz)){
			outa << wyraz << endl;
		}
	}
	
	return 0;
}

