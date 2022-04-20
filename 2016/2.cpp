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
	int max = 0, min = 1000;
	ofstream out("wynik6.txt", ios::app);

	while(in>>liczba){
		if(pierwsza(liczba)){
			if(liczba>max){
				max = liczba;
			}
			if(liczba<min){
				min = liczba;
			}
		}
	}
	out << "b:\n" << max << endl << min;
	
		
	return 0;
}

