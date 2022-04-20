#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream in("Dane_PP/napisy.txt");
	string wyraz;
	ofstream outa("wyniki.txt", ios::app);
	
	int ile=0;
	
	while(in>>wyraz){
		if(wyraz.size()%2==0){
			ile+=1;
		}
		
	}
	outa << "a:\n" << ile << endl;
	
	return 0;
}
