#include <iostream>
#include <fstream>

using namespace std;

bool pierwsza(int a){
	if(a<2){
		return false;
	}
	
	for(int i=2;i*i <= a; i++){	//i < a/2
		if(a%i==0){
			return false;
		}
	}
	return true;
}


int main(){
	ifstream in("Dane_PP2/dane4.txt");
	int liczba;
	int ile = 0;
	ofstream out("wynik6.txt", ios::app);

	while(in>>liczba){
		if(pierwsza(liczba)){
			ile += 1;
		}
	}
	out << "a:\n" << ile;
	
		
	return 0;
}

