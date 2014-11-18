#include <vector>
#include <fstream>
#include <iostream>

using namespace std;

void zapiszSlowaZVectorDoPlik(vector<string> &slowa, ofstream &strumien, int wielkosc){
	
	if(strumien){
		for(int i = 0; i < wielkosc; i++)
			strumien << slowa.at(i)<<"\n";
	}
	else
		cout <<"Blad podczas odczytywania pliku\n";
		
}
