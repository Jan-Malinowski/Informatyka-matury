#include <iostream>
#include <fstream>

using namespace std;

bool podzielna_dwa(string a){
	int x = a.size();
	if(a[x-1]=='0'){
		return true;
	}
	else{
		return false;
	}
}

bool podzielna_osiem(string a){
	int x = a.size();
	if(a[x-1]=='0' && a[x-2]=='0' && a[x-3]=='0'){
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
	
	int iledwa=0, ileosiem=0;
	
	while(in>>wyraz){
		if(podzielna_dwa(wyraz)){
			iledwa += 1;
		}
		if(podzielna_osiem(wyraz)){
			ileosiem += 1;
		}
		
	}
	outa << "b:\n" << iledwa << endl << ileosiem << endl;
	
	return 0;
}
