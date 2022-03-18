#include <iostream>
using namespace std;

//8.Faca  um  programa  que  receba  o  número  de  horas  trabalhadas  e  o  valor  do  salário base. Calcule e mostre o salário a receber seguindo as regras abaixo:
//a)Ahora trabalhada vale a metade do salário base;
//b)O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
//c)O salário a receber equivale ao salário bruto menos o imposto.
int main() {
  int diaT;
  float valorT, salBase, salBruto;
  float INSS;
  
  cout << "Informe a quantidade de dias trabalhados : ";
  cin >> diaT;
  cout << "Informe o valor do dia trabalhado: ";
  cin >> valorT;
  
  salBase = diaT * valorT;
  if (salBase <= 1212.00) {
    INSS = 0.075;
    salBruto = salBase - salBase * 0.075;
  } else if (salBase >= 1212.01 && salBase <= 2427.35) {
    salBruto = salBase - salBase * 0.09;
    INSS = 0.09;
  } else if (salBase >= 2427.36 && salBase <= 3641.03) {
    salBruto = salBase - salBase * 0.12;
    INSS = 0.12;
  } else if (salBase >= 3641.04 && salBase<= 7087.22) {
    salBruto = salBase - salBase * 0.14;
    INSS = 0.14;
  } else {
    salBruto = salBase - salBase * 0.16;
    INSS = 0.18;
  }

  cout << "O salário bruto, já descontado o INSS de " << INSS * 100 << "% é: R$" << salBruto << endl;
  cout << "O valor de INSS recolhido no mês foi : R$" << INSS * salBase;
}