#include <iostream>

using namespace std;

int main (){
  float D, R, QD;
  cout << "\n\tDigite a cotacao do dolar (US$ para R$): ";
  cin >> D;
  cout << "\n\tDigite a quantidade de dolares que deseja converter: ";
  cin >> QD;
  R = D*QD;
  cout << "\n\tO valor em reais (R$) e: R$ " << R << endl;
}