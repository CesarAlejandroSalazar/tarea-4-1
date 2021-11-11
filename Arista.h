#include <string>
#include "Vertice.h"

using namespace std;

class Arista{
    public:
        Arista(){
            this->vi=nullptr;
            this->vj=nullptr;
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
        void connectar(Vertice *primero, Vertice *segundo){
            Arista *aux = new Arista(primero, segundo);
        }


    private:
        Vertice *vi, *vj;

};