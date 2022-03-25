#include <iostream>
using namespace std;
int main() {

  // 1) Faça um programa que receba três notas, calcule e mostre a média
  // aritmética entre elas.//

  float n1, n2, n3, media;
  cout << "Insira a nota 1: ";
  cin >> n1;
  cout << "Insira a nota 2: ";
  cin >> n2;
  cout << "Insira a nota 3: ";
  cin >> n3;

  media = (n1 + n2 + n3) / 3;
  cout << "O resultado da média é: " << media;
}
