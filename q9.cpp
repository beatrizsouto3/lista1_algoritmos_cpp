#include <iostream>

using namespace std;

int main (){
  int Val1, Val2, Aux;
  cout << "\n\tDigite um valor inteiro para variavel Val1: ";
  cin >> Val1;
  cout << "\n\tDigite um valor inteiro para variavel Val2: ";
  cin >> Val2;
  Aux = Val1;
  Val1 = Val2;
  Val2 = Aux;
  cout << "\n\tValor de Val1: " << Val1;
  cout << "\n\tValor de Val2: " << Val2 << endl;
}
