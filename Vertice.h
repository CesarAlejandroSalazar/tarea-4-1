// Un archivo Vertice.cpp que contiene a la clase Vertice con los atributos privados id y dato y con los métodos get y set correspondientes a estos dos atributos //

#include <iostream>
using namespace std;
class Vertice{
  public:
    Vertice(){
      id = 0;
      dato = "";
    }
  	
    Vertice(int id, string dato){
      this->id = id;
      this->dato = dato;
    }
    
    void setId(int id){
      this->id = id;
    }
    
    int getId(){
      return id;
    }
    
    void setDato(string dato){
      this->dato = dato;
    }
    
    string getDato(){
      return dato;
    }

  private:
    int id;
    string dato;
};
