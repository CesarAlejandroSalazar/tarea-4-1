#include "Vertice.h"
#include "Arista.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector < string > NumGuar {};
  string DatoInsertado;
  int count = 0;

  cin >> DatoInsertado;
  char delimiter = ',';

  stringstream sstream(DatoInsertado);
  string Num;

  while (getline(sstream, Num, delimiter)) {
    NumGuar.push_back(Num);
    count += 1;
  }

  for (int i = 0; i < count; i++) {
    cout << NumGuar[i] << endl;
  }

  return 0;
}
