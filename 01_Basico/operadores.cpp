#include <iostream>

using namespace std;

int main() {
  int n1, n2, rest_of_division;
  float division;
  n1 = 20;
  n2 = 10;
  division = (float) n2/n1;
  rest_of_division = n2%n1;
  cout << n1 + n2 << endl;
  cout << n1 - n2 << endl;
  cout << n1 * n2 << endl;
  cout << division << endl;
  cout << rest_of_division << endl;

  cout << "\n";

  cout << n1++ << endl; // Imprime 20 e depois incrementa para 21
  cout << --n1 << endl; // Decrementa para 20 e depois imprime
  cout << n1-- << endl; // Impreme 20 e depois decrementa para 19
  cout << ++n1 << endl; // Incrementa para 20 e depois imprime
  n1 += 2;
  cout << n1 << endl;
  n1 -= 2;
  cout << n1 << endl;
  n1 *= 2;
  cout << n1 << endl;
  n1 /= 2;
  cout << n1 << endl;
  n1 %= 2;
  cout << n1 << endl;
}

/* ------------------------------------------------------------------------------------ *\
 * Temos varios operadores conhecidos: + - * /
 *
 * Temos alguns novos como: % que é o resto da divisão
 *
 * Quando você divide um número inteiro por outro o resultado será inteiro, para que der
   um resultado com casas decimais um dos dois tem que ser float ou podemos usar CAST
 *
 * Cast trasforma uma variavel ou expressão em outro tipo de variavel
 *
 * Temos também varios operadores uniarios como: ++, --, +=, -=, *=, /=, %=. -
 *    n++ -> n += 1 -> n = n + 1 chamado de incremento
 *    n-- -> n -= 1 -> n = n - 1 chamado de decremento
 *
 * Podemos usar precedencia de operações usando o () na expressão: (1+1)*2 = 4
 * ------------------------------------------------------------------------------------ */
