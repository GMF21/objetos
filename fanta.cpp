#include <iostream>

using namespace std;

struct Fanta
{
    string sabor;
    float preco;
    string quantidade;
    string acucar;
    string energia;
};

class Sumo
{
public:
    bool state;  
    Fanta sumo;

    Sumo(Fanta fanta)
    {
        this->sumo = fanta;
        this->state = false;  
        cout << "Fanta: " << endl;
        listarFanta();
    }

    void acoes()
    {
        int escolha;

        do
        {
            cout << "1. abrir lata" << endl;
            cout << "2. beber" << endl;
            cout << "3. meter no lixo" << endl;
            cin >> escolha;

            switch (escolha)
            {
            case 1:
                abrir();
                break;
            case 2:
                beber();
                break;
            case 3:
                meterLixo();
                break;
            default:
                cout << "Escolha inválida. Tente novamente." << endl;
            }
        } while (escolha != 3);
    }

private:
    void listarFanta()
    {
        cout << "Sabor: " << sumo.sabor << endl;
        cout << "Preço: " << sumo.preco << endl;
        cout << "Quantidade: " << sumo.quantidade << endl;
        cout << "Açúcar: " << sumo.acucar << endl;
        cout << "Energia: " << sumo.energia << endl;
    }

    void abrir()
    {
        if (!state)
        {
            state = true;
            cout << "Abriste a lata!" << endl;
        }
        else
        {
            cout << "A lata já está aberta!" << endl;
        }
    }

    void beber()
    {
        if (state)
        {
            for (int i = 1; i <= 5; i++)
            {
                cout << "Estás a beber!" << endl;
            }
            cout << "Já acabaste!" << endl;
        }
        else
        {
            cout << "Não podes beber, a lata ainda está fechada!" << endl;
        }
    }

    void meterLixo()
    {
        if (state)
        {
            cout << "Colocaste no lixo!" << endl;
        }
        else
        {
            cout << "Não podes meter no lixo, a lata ainda está fechada!" << endl;
        }
    }
};

int main()
{
    Fanta fanta1{"laranja", 1.60, "330 ml", "3g", "17kcal"};

    Sumo meuSumo(fanta1);
    meuSumo.acoes();

    return 0;
}
