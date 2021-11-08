#include <string>

using namespace std;

class Arista{
    public:
        Arista(){
            this->vi=nullptr;
            this->vj=nullptr;
            this->numAristas = 0;
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
        void connect(Vertice* vj){
            if(numAristas == 0){
                Arista *arista = new Arista(nullptr, vj);
            }
            else{
                Arista *arista = new Arista(vi, vj);
            }
        }

    private:
        Vertice *vi, *vj;
        int numAristas;
        

};