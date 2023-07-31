#include <iostream>

using namespace std;

int main()
{
    int dia,mes,ano,idade,d;
    cout << "\nDigite o dia: ";
    cin >> dia;
    cout<<endl;
    cout << "\nDigite o mes: " ;
    cin >> mes;
    cout<<endl;
    cout << "\nDigite o ano: " ;
    cin >> ano;
    cout<<endl;
    idade= 2023-ano;
    cout <<"Data De Nacismento: ";
    cout << dia;
    cout <<"/";
    cout << mes;
    cout <<"/";
    cout << ano;
    cout<<endl;
    if (idade <= 18){
        cout <<"\nParabens tu é novo: ";
        cout << idade     ;
    }else if (idade < 50){
        cout <<"\nParabens tu ta na meia idade: ";
    cout << idade;
    }
    else if(idade >= 50){cout <<"\nParabens tu é velho: ";
    cout << idade;
    }
    cout<<endl;
    return 0;
}
