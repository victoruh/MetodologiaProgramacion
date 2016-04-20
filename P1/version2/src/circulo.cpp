#include <iostream>
#include <cmath> 
#include "circulo.h"

using namespace std;


void EscribirCirculo(const Circulo &p)
{
  cout << "(" << p.radio << ",";
  EscribirPunto(p.centro);
}

Circulo LeerCirculo()
{
  Circulo c;
  cin >> c.radio;
  c.centro = LeerPunto();

  return c;
}

double AreaCirculo(const Circulo &c)
{
  return (3.1416 * (c.radio * c.radio));
}