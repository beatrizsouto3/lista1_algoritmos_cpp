#include <iostream>

using namespace std;

int main (){
  const flaot PD = 0.28;
  const float Pi = 0.45;
  float CF, New_Car;
  cout <<"\n\tDigite o custo de fabrica de um carro: R$";
  cin >> CF;
  New_Car = (Pi*CF) + (PD*CF) + CF;
  cout <<"\n\tO custo ao consumidor do carro novo: R$" << New_Car << endl;
}
