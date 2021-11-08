#include <string>
using namespace std;
class Arista{
    public:
        Arista(){
            this->vi=0;
            this->vj=0;
        }

        Arista(int vi, int vj){
            this->vi= vi;
            this->vj= vj;
        }
        void setVi(int vi){
            this->vi = vi;
        }
        int getVi(){
            return vi;
        }
        void setVj(int vj){
            this->vj = vj;
        }
        int getVj(){
            return vj;
        }

    private:
        int vi, vj;
        

};