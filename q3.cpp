#include <iostream>

using namespace std;

int main () {
  float VC, Valor_Prestacoes;
  int P;
  cout << "\n\tDigite o valor da compra: R$";
  cin >> VC;
  cout << "\n\tDigite a quantidade de parcelas desejadas (1 a 10): ";
  cin >> P;
  if (P<1 || P>10){
    cout <<"\n\tA quantidade de parcelas não estar de acordo com o determinado. Tente novamente com um valor entre 1 a 10.";
  } else {
    Valor_Parcelas = VC/P;
    cout <<"\n\tValor da compra: R$" << VC << endl;
    cout <<"\n\tQuantidade de parcelas determinadas: " << P << endl;
    cout <<"\n\tValor total por parcela: R$" << Valor_Parcelas << endl;
  }
}