#include <iostream>
using namespace std;
//13.Sabe-se que para iluminar de maneiracorreta os cômodos de uma casa, para cada m², deve-se  usar  18  W  de  potência.  Faça  um  programa  que  receba  as  duas  dimensões  de  um  cômodo  (em metros), calcule e mostre a sua área (em m²)  e a potência de iluminação que deverá ser utilizada.
int main() {
  float c, l, m2, potIlu;
  cout << "Insira o comprimento do cômodo: ";
  cin >> c;
  cout << "Insira a largura do cômodo: ";
  cin >> l;

  m2 = c * l;
  potIlu = m2/18;

  cout << "Dimensão do cômodo: " << m2 << "m²" << endl;
  cout << "Potencia de iluminação recomendada: " << potIlu << "W" << endl;
}