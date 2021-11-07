#include <string>
using namespace std;
class Arista{
    public:
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
    private:
        string id;
        int dato;
};