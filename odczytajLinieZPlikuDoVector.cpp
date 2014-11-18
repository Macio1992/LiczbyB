#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

void odczytajLinieZPlikuDoVector(vector<string> &linie, ifstream &plik, int wielkosc){
	
	string linia;
	int i = 0;
	
	if(plik){
		while(i < wielkosc){
			if(plik.eof()){
				plik.close();
				plik.open("ThinkingInC++2Vone.txt");
			}
			
			getline(plik, linia);
			if(!(linia == "")){
				linie.push_back(linia);
				i++;
			}
		}
	}
	else
		cout <<"Blad podczas odczytywania pliku\n";
}
