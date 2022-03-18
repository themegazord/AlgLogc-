#include <iostream>
using namespace std;
int main() {
  // Faça um  programa em  C  que leia o número total de eleitores de um
  // município, o número de votos brancos, nulos e válidos. O programa deverá
  // calcular e mostrar o percentual que cada um representa em relação ao total
  // de eleitores.

  int eleitor, branco, nulo, valido;

  cout << "Informe a quantidade de eleitores da região: ";
  cin >> eleitor;
  cout << "Informe a quantidade de votos em branco: ";
  cin >> branco;
  cout << "Informe a quantidade de votos nulos: ";
  cin >> nulo;
  cout << "Informe a quantidade de votos validos: "; 
  cin >> valido;

  cout << "A porcentagem de votos em branco: " << ((float)branco / eleitor) * 100 << "%"<< endl;
  cout << "A porcentagem de votos nulos: " << ((float)nulo / eleitor) * 100 << "%" << endl;
  cout << "A porcentagem de votos validos: " << ((float)valido / eleitor) * 100 << "%" << endl;
}