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

   while (std::getline(sstream, Num, delimiter)){
     NumGuar.push_back(Num);
     count ++;
   }

   for (int i = 0; i < count; i++) {
     cout << NumGuar[i] << endl;
   }

    return 0;
}
