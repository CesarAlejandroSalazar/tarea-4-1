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
  int count = 0;
    

  stringstream sstream(DatoInsertado);
  string Num;
  Vertice *cabeza;
  
   while (getline(sstream, Num, delimiter)){
     NumGuar.push_back(Num);
     count ++;
   }
   Arista *listaArista[count];

   for (int i = 0; i+1 < count; i++) {
     cout << NumGuar[i] << endl;
     Vertice *primero = new Vertice(1,NumGuar[i]);
     Vertice *segundo = new Vertice(1,NumGuar[i+1]);
     listaArista[i] = new Arista(primero,segundo);
   }

    return 0;
}
