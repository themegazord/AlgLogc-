#include <iostream>
using namespace std;
int main() {
  // 4.Faça  um  programa  em  C  para  determinar  o  consumo  médio  de  um
  // automóvel.  O  programa deverá ler a distância total percorrida pelo
  // automóvel e o total de combustível gasto, calcular e mostrar o consumo
  // médio.

  int kmrod, ltcomb;

  cout << "Quantos Km/h foram percorridos? ";
  cin >> kmrod;
  cout << "Quantos litros de combustivel foram usados? ";
  cin >> ltcomb;

  cout << "Seu carro está com uma média de consumo de " << kmrod / ltcomb << " litros/Km" << endl;
}