#include <iostream>

using namespace std;

int main (){
  int AF, QCD;
  float P, Preco_total_gasto;
  cout <<"\n\tDigite o numero de anos fumando: ";
  cin >> AF;
  cout <<"\n\tDigite a quantidade de cigarros fumados por dia: ";
  cin >> QCD;
  cout <<"\n\tDigite o preco por carteira: R$";
  cin >> P;
  Preco_total_gasto = ((AF*365*QCD)/10)*P;
  cout <<"\n\t Preco total gasto: R$" << Preco_total_gasto << endl;
}