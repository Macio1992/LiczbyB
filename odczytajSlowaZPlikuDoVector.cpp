#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

void odczytajSlowaZPlikuDoVector(vector<string> &slowa, ifstream &plik, int wielkosc){
	
	string slowo;
	int i = 0;
	
	if(plik){
		while(i < wielkosc){
			if(plik.eof()){
				plik.close();
				plik.open("ThinkingInC++2Vone.txt");
			}
			
			plik >> slowo;
			if(!(slowo == "")){
				slowa.push_back(slowo);
				i++;
			}
		}
	}
	else
		cout <<"Blad podczas odczytywania pliku\n";
}
