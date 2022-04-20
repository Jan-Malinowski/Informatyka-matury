#include <iostream>
#include <fstream>

using namespace std;

bool same_zera(string a){
	int ilez = 0, ilej = 0;
	for(int i=0; i<a.size(); i++){
		if(a[i]=='0'){
			ilez+=1;
		}
	}
	if(ilez==a.size()){
		return true;
	}
	else{
		return false;
	}
}

bool same_jedynki(string a){
	int ilej = 0;
	for(int i=0; i<a.size(); i++){
		if(a[i]=='1'){
			ilej+=1;
		}
	}
	if(ilej==a.size()){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	ifstream in("Dane_PP/napisy.txt");
	string wyraz;
	ofstream outc("wyniki.txt", ios::app);
	
	int ilez=0, ilej=0;
	
	while(in>>wyraz){
		if(same_zera(wyraz)){
			ilez+=1;
		}
		if(same_jedynki(wyraz)){
			ilej+=1;
		}
		
	}
	outc << "c:\nzera: " << ilez << "\njedynki: " << ilej << endl;
	
	return 0;
}
