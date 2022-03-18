#include <iostream>
using namespace std;
//14.Faça um programa que receba o número de horas trabalhadas, o valor do salário base e o número  de  horas  extras  trabalhadas.  Calcule  e  mostre  o  salário  a  receber  seguindo  as  regras  a seguir:
//a)A hora trabalhada vale 1/8 do salário base;
//b)A hora extra vale 1/4 do salário base;
//c)O  salário  bruto  equivale  ao  número  de  horas  trabalhadas  multiplicadas  pelo  valor  da hora trabalhada;
//d)A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
//e)O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
int main() {
  float hTrab, vSalBase, nHrExtra, cHTrab, cHExtra, sRec, sBruto, vRecExtra;

  cout << "Insira o número de horas trabalhadas: ";
  cin >> hTrab;
  cout << "Insira o valor do salário base: ";
  cin >> vSalBase;
  cout << "Insira o valor de horas extras: ";
  cin >> nHrExtra;

  cHTrab = 0.125 * vSalBase;
  cHExtra = 0.25 * vSalBase;

  sBruto = hTrab * cHTrab;
  vRecExtra = nHrExtra * cHExtra;

  sRec = sBruto + vRecExtra;

  cout << "Salário a receber: R$" << sRec;
}