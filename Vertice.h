// Un archivo Vertice.cpp que contiene a la clase Vertice con los atributos privados id y dato y con los métodos get y set correspondientes a estos dos atributos //

#include <iostream>
using namespace std;
class Vertice{
  public:
    Vertice(){
      id = "";
      dato = 0;
    }
  	
    Vertice(string id, int dato){
      this->id = id;
      this->dato = dato;
    }
    
    void setId(string id){
      this->id = id;
    }
    
    string getId(){
      return id;
    }
    
    void setDato(int dato){
      this->dato = dato;
    }
    
    int getDato(){
      return dato;
    }
    
  
  private:
    string id;
    int dato;
};
