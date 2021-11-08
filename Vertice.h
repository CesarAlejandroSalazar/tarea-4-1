// Un archivo Vertice.cpp que contiene a la clase Vertice con los atributos privados id y dato y con los métodos get y set correspondientes a estos dos atributos //
#include "Arista.h"
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

    void setNext(Arista *next){
      this->next = next;
    }
    void setPrev(Arista *prev){
      this->prev = prev;
    }
    Arista *getNext(){
      return next;
    }
    Arista *getPrev(){
      return prev;
    }
    void print()
    {
        Vertice *curr = head;
        cout << "El contenido de la Lista" << endl;
        while (curr != nullptr)
        {
            cout << curr->getDato() << endl;
            curr = curr->getNext()->getNext();
        }
    }
    
  
  private:
    string id;
    int dato;
    Vertice *head;
    Arista *next, *prev;
};
