#include <iostream>

using namespace std;

struct Agua{
    string nome;
    string quantidade;
    string marca;
};

class Bebida{

    public:

        bool state;
        Agua bebida;

        Bebida(Agua agua){
            this -> bebida = agua;
            this -> state = false;
            listar();
        }

        void acoes(){

            int escolha;

            do
            {
                
            
            
            cout << "1. abrir" << endl;
            cout << "2. beber" << endl;
            cout << "3. meter no lixo" << endl;
            cin >> escolha;




            switch (escolha)
            {
            case 1: abrir();
                break;
            case 2: beber();
                break;
            case 3: 
                    lixo();
                break;
            
            default: cout << "escolhe outra" << endl;
                break;
            }            
        } while (escolha != 3);


        }

    private:

        void abrir(){
            if (!state){
                
                state = true;
                cout << "Abriste" << endl;
            }else{
                cout << "ja esta aberto" << endl;
            }
            
        }

        void beber(){
            if (state)
            {
                cout << "estas a beber" << endl;
            }else{
                cout << "ainda ta fechado" << endl;
            }
            
        }

        void lixo(){
            cout << "meteste no lixo" << endl;
        }

        void listar(){
            cout << bebida.nome << endl;
            cout << bebida.quantidade << endl;
            cout << bebida.marca << endl;
        }

};

int main(){

    Agua agua1 = {"agua", "1L", "nascente"};

    Bebida Minhaagua(agua1);
    Minhaagua.acoes();

}

