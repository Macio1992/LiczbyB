#include <string>
#include <vector>
using namespace std;

void odczytajLinieZPlikuDoVector(vector<string> &linie, ifstream &plik, int wielkosc);
void odczytajSlowaZPlikuDoVector(vector<string> &slowa, ifstream &plik, int wielkosc);

void zapiszLinieZVectorDoPlik(vector<string> &linie, ofstream &strumien, int wielkosc);
void zapiszSlowaZVectorDoPlik(vector<string> &slowa, ofstream &strumien, int wielkosc);
