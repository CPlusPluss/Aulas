#include <iostream>

using namespace std;

int main() {
  int age = 10;
  float pi = 3.1416;
  double big_pi = 3.14159265359;
  cout << age << endl;
  cout << pi << endl;
  cout << big_pi << endl;
}

/* ----------------------------------------------------------------------------------------------------------------------------------------- *\
 * int: Tipo inteiro, ..., -3, -2, -1, 0, 1, 2, 3, ...
 * float: Tipo ponto flutuante, ... -3.0, -2.0, -1.0, 0.0, 1.0, 2.0, 3.0, ...
 * double: Tipo ponto flutuante com precisão dupla, pode inserir número maiores
 *
 * Podemos declarar mais de uma variável por linha, porém tem que ser do mesmo tipo:
 *   - int idade1, idade2, idade3;
 *
 * Aceitas caracteres nas variaves: a-z, A-Z e _ e 0-9 desde que usados depois de um caracter
 * Se você não inicializar as variaveis ela fica com lixo de memória (número aleatorio) dentro dela, então sempre inicialize as variáveis
 * ----------------------------------------------------------------------------------------------------------------------------------------- */
