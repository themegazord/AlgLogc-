#include <iostream>
using namespace std;

int main() {
  // 3.Faça um programa que calcule o mostre a área de um triângulo.Sabe-se que:
  // AREA = (base * altura)/2
  int base, altura;
  cout << "Insira o tamanho da base do triangulo: ";
  cin >> base;
  cout << "Insira o tamanho da altura do triangulo: ";
  cin >> altura;

  cout << "A área do triângulo é: " << (base * altura) / 2 << endl;
}