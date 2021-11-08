#include <string>
#include "Vertice.h"
using namespace std;

class Arista{
    public:
        Arista(){
            this->vi=nullptr;
            this->vj=nullptr;
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
        void addFirst(){
            Arista(Vertice vj);
        }

    private:
        Vertice *vi, *vj;
        

};