// Se crea la clase arista de forma publica asi como el vertice incluyendo a vertice.h
#include <string>
#include "Vertice.h"

using namespace std;

class Arista{
    public:
        Arista(){
            this->vi=nullptr;
            this->vj=nullptr;
        }
    // Se define el codigo para que se llame al vertice del lado izquierdo o derecho dependiendo con setter y getters
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

// Se establece de manera privada para los valos de vi y vj
    private:
        Vertice *vi, *vj;

};
