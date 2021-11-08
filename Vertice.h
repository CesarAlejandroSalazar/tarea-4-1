// Un archivo Vertice.cpp que contiene a la clase Vertice con los atributos privados id y dato y con los métodos get y set correspondientes a estos dos atributos //
#include "Arista.h"
#include <iostream>
using namespace std;
class Vertice{
  public:
    Vertice(){
      id = 0;
      dato = 0;
      numVertices = 0;
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

    void nuevoVertice(int id, int dato){
      Vertice *aux = new Vertice(id, dato);
      if (numVertices==0){
        head = aux;
      }
      else{
        tail = aux;
      }
    }
    void print()
    {
        Vertice *curr = head;
        cout << "El contenido de la Lista" << endl;
        while (curr != nullptr)
        {
            cout << curr->getDato() << endl;
            curr = curr->getNext()->getVj();
        }
    }
    
  
  private:
    int id, dato, numVertices;
    Vertice *head, *tail;
    Arista *next, *prev;
};
