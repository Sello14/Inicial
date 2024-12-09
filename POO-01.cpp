#include <iostream>

using namespace std;

class nomeClasse {
    private:
        int valorPrivado;

    public:
        int valorPublico;

        void funcaoPublica() {
            cout << "Esta e minha primeira funcao" << endl;
        }
};

int main() {
    nomeClasse objetoNovo;
    nomeClasse outroObjeto;

    objetoNovo.valorPublico = 10;

    objetoNovo.funcaoPublica();
    outroObjeto.funcaoPublica();
    
    return 0;
}