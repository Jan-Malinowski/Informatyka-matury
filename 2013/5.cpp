#include <iostream>
#include <fstream>

using namespace std;

bool tyle_samo(string a){
	int ilez = 0;
	for(int i=0; i<a.size(); i++){
		if(a[i]=='0'){
			ilez+=1;
		}
	}
	if(ilez==a.size()-ilez){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	ifstream in("Dane_PP/napisy.txt");
	string wyraz;
	ofstream outb("wyniki.txt", ios::app);
	
	int ile=0;
	
	while(in>>wyraz){
		if(tyle_samo(wyraz)){
			ile+=1;
		}
		
	}
	outb << "b:\n" << ile << endl;
	
	return 0;
}
