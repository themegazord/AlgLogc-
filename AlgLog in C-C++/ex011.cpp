#include <iostream>
using namespace std;
//11.Um  funcionário  recebe  um  salário  fixo  mais  4%  de  comissão  sobre  as  vendas.  Faça  um programa que receba o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do funcionário.
int main() {
  float salario, vVendas, comissao, salFinal, percom = 0.04;

  cout << "Informe o salário fixo do funcionário: ";
  cin >> salario;
  cout << "Informe o valor das vendas desse mês: ";
  cin >> vVendas;

  comissao = vVendas * percom;
  salFinal = comissao + salario;

  cout << "Valor da comissão: R$" << comissao << endl;
  cout << "Valor final do salário (salário base + comissão): R$" << salFinal << endl;
}