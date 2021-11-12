#include "Arista.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  // Declaración
  char separador = ',';
  int count = 0;
  vector < string > NumGuar {};
  string DatoInsertado, Num;
  Arista * listaArista[count];

  cout << "Escriba los numeros separados por comas" << endl;
  cin >> DatoInsertado;

  // Leer el string insertado y poder modificarlo
  stringstream sstream(DatoInsertado);

  // Lee el string DatoInsertado para identificar el elemento que los va a separar que en este caso será la coma. Va ciclando a lo largo del string y cortando hasta que se acabe. Con el push back guarda el dato de principio a fin.
  while (getline(sstream, Num, separador)) {
    NumGuar.push_back(Num);
    count++;
  }

  // Crear e insertar los nuevos vertices en las aristas
  for (int i = 0; i + 1 < count; i++) {
    Vertice * primero = new Vertice(1, NumGuar[i]);
    Vertice * segundo = new Vertice(1, NumGuar[i + 1]);
    listaArista[i] = new Arista(primero, segundo);

    cout << "En la arista " << i + 1 << " el primer vertice es: " << listaArista[i] -> getVi() -> getDato() << " y el segundo es: " << listaArista[i] -> getVj() -> getDato() << endl;
  }

  return 0;
}
