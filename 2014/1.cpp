#include <iostream>
#include <fstream>

using namespace std;

bool pierwsza(int a){
	if(a<2){
		return false;
	}
	
	for(int i=2;i*i <= a; i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	ifstream in("NAPIS.txt");
	string wyraz;
	int suma=0, ile=0;
	ofstream outa("zadanie5.txt", ios::app);
	
	while(in>>wyraz){
		for(int i=0; i<wyraz.size(); i++){
			suma += int(wyraz[i]);
		}
		if(pierwsza(suma)){
			ile+=1;
		}
		suma = 0;
	}
	
	outa << "a:\n" << ile << endl;
	
	return 0;
}

