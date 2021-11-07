// Un archivo Vertice.cpp que contiene a la clase Vertice con los atributos privados id y dato y con los métodos get y set correspondientes a estos dos atributos //

#include <iostream>
using namespace std;
class Vertice{
  public:
    Vertice(){
      id = "";
      dato = 0;
    }
    
    void setid(string id){
      id = id;
    }
    
    string getid(){
      return id;
    }
    
    void setdato(int dato){
      dato = dato;
    }
    
    int getdato(){
      return dato;
    }
    
  
  private:
    string id;
    int dato;
};
