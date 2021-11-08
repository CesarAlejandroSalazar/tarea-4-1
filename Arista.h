#include <string>
#include "Vertice.h"

using namespace std;

class Arista{
    public:
        Arista(){
            this->vi=nullptr;
            this->vj=nullptr;
            this->numAristas = 0;
            numVertices = 0;
            head = nullptr;
            tail = nullptr;
        }
        Arista(Vertice *vi, Vertice *vj){
            this->vi=vi;
            this->vj=vj;
        }

        void setVi(Vertice *vi){
            this->vi = vi;
        }
        Vertice *getVi(){
            return vi;
        }
        void setVj(Vertice* vj){
            this->vj = vj;
        }
        Vertice *getVj(){
            return vj;
        }
        void connect(Vertice* vi, Vertice* vj){
            Arista *arista = new Arista(vi, vj);
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
                current = current->getNext();
                }
                current->setNext(aux);
                aux->setPrev(current);
                tail = aux;
                numVertices++;
            }
        }
        void print()
        {
            Vertice *curr = head;
            cout << "El contenido del grafo" << endl;
            while (curr->getNext() != nullptr)
            {
                cout << curr->getDato() << endl;
                curr = curr->getNext();
            }
        }

    private:
        Vertice *vi, *vj;
        int numAristas, numVertices;
        Vertice *head, *tail;

};