#include "Vertice.h"
#include "Arista.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<string> NumGuar{};
	string DatoInsertado;
	
	cout<<"Escriba los numeros separados por comas"<<endl;
	cin >> DatoInsertado;
  char delimiter = ',';

  stringstream sstream(DatoInsertado);
  string Num;

  while (getline(sstream, Num, delimiter)){
     NumGuar.push_back(Num);
		 cout << Num << endl;
  }

    return 0;
}
