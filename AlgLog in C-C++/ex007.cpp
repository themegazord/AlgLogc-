#include <iostream>
using namespace std;
// 7. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o
// percentual de lucro do distribuidor e dos impostos aplicados ao preço de
// fábrica. Faca um programa que receba o preço de fábrica de um veículo, o
// percentual de lucro do distribuidor e o percentual de impostos. Calcule e
// mostre:
//a)o valor correspondente ao lucro do distribuidor;
//b)o valor correspondente aos impostos;
//c)o preço final do veículo.
int main() {
  float pfab, ldis, iapli, vLucroDis, vCorImp, preFinal;

  cout << "Informe o preço de fábrica do produto: ";
  cin >> pfab;
  cout << "Informe a porcentagem de lucro do distribuidor: ";
  cin >> ldis;
  cout << "Informe o percentual de impostos: ";
  cin >> iapli;

  vLucroDis = pfab * (ldis / 100);
  vCorImp = pfab * (iapli / 100);
  preFinal = pfab + vLucroDis + vCorImp;

  cout << "O valor correspondente ao lucro do distribuidor: R$ " << vLucroDis << endl;
  cout << "O valor correspondente aos impostos: R$ " << vCorImp << endl;
  cout << "O preço final do veículo: R$ " << preFinal << endl;
  
}
