#include <iostream>

using namespace std;

int main (){
  int S, H, M, Seg_Rest;
  cout <<"\n\tDigite o tempo total do evento em segundos: ";
  cin >> S;
  H = S/3600;
  M = (S%3600)/60;
  Seg_Rest = S%60;
  cout <<"\n\tO tempo convertido e: " << H << "h " << M << "m " << Seg_Rest << "s" << endl;
}