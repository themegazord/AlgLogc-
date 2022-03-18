#include <iostream>
using namespace std;
//12.Faça um programa que receba o raio, calcule e mostre:
//a)O comprimento de uma esfera, sabe-se que C = 2πR;
//b)A área de uma esfera, sabe-se que A = πR²;
//c)O volume de uma esfera, sabe-se que V = ¾πR³.
int main() {
  float r ,a, c, v, pi = 3.14;
  cout << "Informe o raio da esfera: ";
  cin >> r;

  a = 4 * pi * (r * r);
  c = (2 * pi) * r;
  v = (4 * pi * (r*r*r)) / 3;

  cout << "Área da esfera: " << a << endl;
  cout << "Comprimento da esfera: " << c << endl;
  cout << "Volume da esfera: " << v << endl;
}