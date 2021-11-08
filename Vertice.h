// Un archivo Vertice.cpp que contiene a la clase Vertice con los atributos privados id y dato y con los métodos get y set correspondientes a estos dos atributos //
#include "Arista.h"
#include <iostream>
using namespace std;
class Vertice{
  public:
    Vertice(){
      id = 0;
      dato = "";
      numVertices = 0;
      next = nullptr;
      prev = nullptr;
      head = nullptr;
      tail = nullptr;
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
        numVertices++;
      }
      else{
        Vertice *current = head;
        while(current->getNext() != nullptr){
          current = current->getNext()->getVj();
        }
        Arista aristaaux;
        tail = aux;
        aristaaux.connect(current,tail);
        numVertices++;
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
    int id, numVertices;
    string dato;
    Vertice *head, *tail;
    Arista *next, *prev;
};
