#include <iostream>
using namespace std;
// 6.Sabe-se que:
//•1 pé = 12 polegadas
//•1 jarda = 3 pés
//•1 milha = 1.760 jardas
// Faca um  programa  que  receba  uma  medida  em  pés,  faça  as  conversões a
// seguir  e  mostre  os resultados.
// a)Polegadas;
// b)Jardas;
// c)Milhas.
int main() {
  int pes;
  float pol, j;
  double milha;
  
  cout << "Informe a quantidade em pés: ";
  cin >> pes;

  j = pes * 0.333;
  pol = pes * 12;
  milha = pes / 5280;

  cout << "Polegadas: " << pol << " polegadas" << endl
       << "Jardas: " << j << " jardas" << endl
       << "Milhas: " << milha << " milhas" << endl;
}