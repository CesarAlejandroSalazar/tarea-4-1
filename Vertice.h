// Un archivo Vertice.cpp que contiene a la clase Vertice con los atributos privados id y dato y con los métodos get y set correspondientes a estos dos atributos //

#include <iostream>
using namespace std;
class Vertice{
  public:
  //Constructores
    Vertice(){
      id = 0;
      dato = "";
    }
  	
    Vertice(int id, string dato){
      this->id = id;
      this->dato = dato;
    }
   //Métodos de setters y getters
    void setId(int id){
      this->id = id;
    }
   //funcion set para entregar como salida o resultado el dato integer del vertice  
    int getId(){
      return id;
    }
    
    void setDato(string dato){
      this->dato = dato;
    }
    
    string getDato(){
      return dato;
    }
   // Se construye la funcion en metodo privado para asegurar que los datos sean internos del codigo vertice
  private:
    int id;
    string dato;
};
