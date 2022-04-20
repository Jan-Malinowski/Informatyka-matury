#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream in("liczby.txt");
	string liczba;
	ofstream outa("wyniki.txt", ios::app);
	
	int nr_liczby=0;
	int max_nr, min_nr;
	string max;
	string min;
	
	in >> liczba;
	max = liczba;
	min = liczba;
	nr_liczby += 1;
	max_nr = nr_liczby;
	min_nr = nr_liczby;
	
	while(in >> liczba){
		nr_liczby++;
		
		if(max.size()<liczba.size()){
			max=liczba;
			max_nr=nr_liczby;
		}	
		
		if(max.size()==liczba.size()){
			for(int i=0; i<liczba.size(); i++){
				if(max[i]<liczba[i]){
					max=liczba;
					max_nr=nr_liczby;
					break;
				}
				if(max[i]>liczba[i]){
					break;
				}
			}
		}
		if(min.size()>liczba.size()){
			min=liczba;
			min_nr=nr_liczby;
		}	
		
		if(min.size()==liczba.size()){
			for(int i=0; i<liczba.size(); i++){
				if(min[i]>liczba[i]){
					min=liczba;
					min_nr=nr_liczby;
					break;
				}
				if(min[i]<liczba[i]){
					break;
				}
			}
		}
	}
	
	outa << "c:\n" << max_nr << endl << min_nr << endl;
	
	return 0;
}
