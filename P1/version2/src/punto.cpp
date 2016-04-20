#include <iostream>
#include <cmath> 
#include "punto.h"

using namespace std;

// Implementación de las funciones
void EscribirPunto(const Punto &p)
{
  cout << "-(" << p.x << ","  << p.y << ")";
}

Punto LeerPunto()
{
  Punto p;
  cout << "Introduce valor de x: ";
  cin >> p.x;
  cout << "Introduce valor de y: ";
  cin >> p.y;
  
  return p;
}

double DistanciaPuntos(const Punto &p1, const Punto &p2)
{
  return sqrt(((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y)));
}

Punto PuntoMedio(const Punto &p1, const Punto &p2)
{
  Punto pMedio;
  pMedio.x = (p1.x + p2.x) / 2;
  pMedio.y = (p1.y + p2.y) / 2;
  
  return pMedio;
}