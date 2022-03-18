#include <iostream>
using namespace std;

//9.Sabe-se que o quilowatt de energia custa um quinto do valor base. Faça um programa que receba o valor base e a quantidade de quilowatts consumida por uma residência. Calcule e mostre:
//a)O valor, em reais, de cada quilowatt;
//b)O valor, em reais, a ser pago por essa residência;
//c)O valor, em reais, a ser pago com desconto de 15%.

int main() {
float vTarifa, qkwh, vkwh, vPag, vPagDesc;
  cout << "Informe o valor base tarifário de energia: ";
  cin >> vTarifa;
  cout << "Informe a quantidade de kWh que foi consumida: ";
  cin >> qkwh;

  vkwh = vTarifa/5;
  vPag = vkwh * qkwh;
  vPagDesc= vPag - vPag * 0.15;

  cout << "O valor de cada quilowatt é : R$" << vkwh << endl;
  cout << "O valor a ser pago no mês é : R$" << vPag << endl;
  cout << "O valor a ser pago com desconto dde 15%: R$" << vPagDesc << endl;
  
  
}