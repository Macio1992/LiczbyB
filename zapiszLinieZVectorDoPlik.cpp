#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

void zapiszLinieZVectorDoPlik(vector<string> &linie, ofstream &strumien, int wielkosc){
	
	if(strumien){
		for(int i = 0; i < wielkosc; i++)
			strumien << linie.at(i)<<"\n";
	}
	else
		cout <<"Blad podczas odczytywania pliku\n";
		
}
