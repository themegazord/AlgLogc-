#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  // 2.Faça um programa que receba o valor de um deposito e o valor da taxa de
  // juros, calcule e mostre o valor do rendimento e o valor total depois do
  // rendimento.
  int valor, juros;
  double r, rv;

  cout << "Insira o valor a ser depositado: ";
  cin >> valor;
  cout << valor << endl;
  cout << "Digite a porcentagem de juros a ser atribuido: ";
  cin >> juros;
  r = valor * (juros * 0.01);
  rv = r + valor;

  cout << "O valor de rendimento mensal foi: " << r << endl;
  cout << "O valor total foi: " << rv;
}