// Un archivo Vertice.cpp que contiene a la clase Vertice con los atributos privados id y dato y con los métodos get y set correspondientes a estos dos atributos //

#include <iostream>
using namespace std;
class Vertice{
  public:
    Vertice(){
      id = 0;
      dato = "";
      next = nullptr;
      prev = nullptr;

    }
  	
    Vertice(int id, int dato){
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

    void setNext(Vertice *next){
      this->next = next;
    }
    void setPrev(Vertice *prev){
      this->prev = prev;
    }
    Vertice *getNext(){
      return next;
    }
    Vertice *getPrev(){
      return prev;
    }
    
  
  private:
    int id;
    string dato;
    Vertice *next, *prev;
};
