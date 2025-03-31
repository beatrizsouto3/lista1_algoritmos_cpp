#include <iostream>

using namespace std;

int main() {
    float A, B;
    bool C, D;
    // valores reais
    cout << "\n\tDigite o valor de A: ";
    cin >> A;
    cout << "\n\tDigite o valor de B: ";
    cin >> B;
    cout << "\n\tadicao: " << A+B << endl;
    cout << "\n\tSubtracao: " << A-B << endl;
    cout << "\n\tMultiplicacao: " << A*B << endl;
    cout << "\n\tResto da divisao: " << (int)A % (int)B << endl;
    
    // valores logicos
    cout << "\n\tDigite o valor logico de C (0 para false, 1 para true): ";
    cin >> C;
    cout << "\n\tDigite o valor logico de D (0 para false, 1 para true): ";
    cin >> D;
    cout << "\n\tNegaacao de C: " << !C << endl;
    cout << "\n\tNegacao de D: " << !D << endl;
    cout << "\n\tConjuncao (C && D): " << (C && D) << endl;
    cout << "\n\tDisjuncao (C || D): " << (C || D) << endl;
}
