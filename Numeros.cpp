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
	
	
	cin >> DatoInsertado;
  char delimiter = ',';
    

  stringstream sstream(DatoInsertado);
  string Num;

   while (std::getline(sstream, Num, delimiter)){
     NumGuar.push_back(Num);
   }

   for (const auto &str : NumGuar) {
     cout << str << endl;
   }

    return 0;
}
