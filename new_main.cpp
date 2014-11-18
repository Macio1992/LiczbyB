#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <sstream>
#include "new.h"

using namespace std;

int main(){
	
	srand(time(NULL));
	
	ofstream strumien;
	ifstream plik;
	
	vector<string> linie;
	vector<string> slowa;
	string dane, napis;
	int i = 1, wynik, d;
	char c;
	
	clock_t t1, t2;
	float ratio;
	ratio = 1./CLOCKS_PER_SEC;
	float czas;
	
	d = 100;
	ostringstream ss;
	ss << d;
	string str = ss.str();
	wynik = 100;
	
	if(strumien.good() && plik.good()){
		cout <<"rozmiar |\tczas_czytania_linii_do_vector |\tczas_zapisywania_do_pliku \n";
		while(i <= 6){
			while(i <= 4){
				c = 'L';
				napis = c + str;
				cout.precision(3);
				cout <<wynik<<"\t\t";
				
				t1 = clock();
				plik.open("ThinkingInC++2Vone.txt");
				odczytajLinieZPlikuDoVector(linie, plik, wynik);
				plik.close();
				t2 = clock();
				czas = ratio*(long)t2-ratio*(long)t1;
	  			cout << fixed << czas << "\t\t\t\t";
	
				t1 = clock();
				strumien.open(napis.c_str());
				zapiszLinieZVectorDoPlik(linie, strumien, wynik);
				strumien.close();
				t2 = clock();
				czas = ratio*(long)t2-ratio*(long)t1;
	  			cout << fixed << czas << "\n";
				
				i++;
				str += "0";
				linie.clear();
				wynik *= 10;
			}
			if(i == 5){
				cout <<"rozmiar |\tczas_czytania_slow_do_vector |\tczas_zapisywania_do_pliku \n";
				wynik /= 10;
			}
			c = 'S';
			napis = c + str;
			cout <<wynik<<"\t\t";
			
			t1 = clock();
			plik.open("ThinkingInC++2Vone.txt");
			odczytajSlowaZPlikuDoVector(linie, plik, wynik);
			plik.close();
			t2 = clock();
			czas = ratio*(long)t2-ratio*(long)t1;
	  		cout << fixed << czas << "\t\t\t\t";
				
			napis = "S" + str;
			t1 = clock();
			strumien.open(napis.c_str());
			zapiszSlowaZVectorDoPlik(linie, strumien, wynik);
			strumien.close();
			t2 = clock();
			czas = ratio*(long)t2-ratio*(long)t1;
	  		cout << fixed << czas << "\n";
			
			i++;
			str += "0";
			slowa.clear();
			wynik *= 10;
		}
	}
	else{
		cout <<"Blad podczas odczytu pliku\n";
	}
	
	return 0;
	
}
