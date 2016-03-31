#include "imagen.h"

Imagen::Imagen(){
  this.nfilas = 0;
  this.ncolumnas = 0;
  this.datos = 0;
  return this;
}

Imagen::Imagen(int filas, int columnas){
  this.nfilas = filas;
  this.ncolumnas = columnas;

  //i = y ∗ columnas + x
  //Recorremos de forma secuencial el vector y lo ponemos a negro cada posicion
  for (int i=0;i<ncolumnas*nfilas;i++){
    datos[i]=0;
  }
  return this;
}

void Imagen::crear(int filas,int columnas){
  this.nfilas = filas;
  this.ncolumnas = columnas;

  for (int i=0;i<ncolumnas*nfilas;i++)
    this.datos[i]=0;
}

int Imagen::filas(){
  return this.nfilas;
}

int Imagen::columnas(){
  return this.ncolumnas;
}

void Imagen::set(int y, int x, byte v){
  this.datos[y*this.ncolumnas+x]=v;
}

byte Imagen::getPos(int i){
    return this.datos[i];
}
