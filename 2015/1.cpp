#include <iostream>
#include <fstream>

using namespace std;

bool czy_wiecej_zer(string a){
	int x = a.size();
	int ile = 0;
	for(int i=0; i<x; i++){
		if(a[i]=='0'){
			ile+=1;
		}
	}
	if(ile>x-ile){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	ifstream in("liczby.txt");
	string wyraz;
	ofstream outa("wyniki.txt", ios::app);
	
	int ilez=0, ilej=0;
	
	while(in>>wyraz){
		if(czy_wiecej_zer(wyraz)){
			ilez += 1;
		}
		
	}
	outa << "a:\n" << ilez << endl;
	
	return 0;
}
