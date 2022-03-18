#include <iostream>
using namespace std;

// 10.Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo  gasto  na  viagem  e  a  velocidade  média  durante  ela.  Desta  forma,  será possível  obter  a distância  percorrida  com  a  fórmula  DISTANCIA  =  TEMPO  *  VELOCIDADE.  Tendo  o  valor  da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.

int main() {
  float tViagem, velMedia, dPer, qLitro;
  cout << "Informe o tempo gasto na viagem em horas: ";
  cin >> tViagem;
  cout << "Informe a velocidade média durante a viagem em Km/h: ";
  cin >> velMedia;

  dPer = tViagem * velMedia;
  qLitro = dPer / 12;

  cout << "Tempo gasto: " << tViagem << " h" << endl;
  cout << "Velocidade Média: " << velMedia << " Km/h" << endl;
  cout << "Distancia percorrida: " << dPer << " Km" << endl;
  cout << "Quantidade de combustivel em litros gastos na viagem: " << qLitro << " L" << endl;
  
  
}