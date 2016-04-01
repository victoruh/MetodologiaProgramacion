#include "imagen.h"

Imagen::Imagen(){
  this.nfilas = 0;
  this.ncolumnas = 0;
  this.datos = 0;
}

Imagen::Imagen(int filas, int columnas){
  this.nfilas = filas;
  this.ncolumnas = columnas;

  //i = y ∗ columnas + x
  //Recorremos de forma secuencial el vector y lo ponemos a negro cada posicion
  for (int i=0;i<ncolumnas*nfilas;i++){
    datos[i]=0;
  }
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

byte Imagen::get(int y, int x){
  return this.datos[y*this.ncolumnas+x];
}

void Imagen::setPost(int i, byte v){
  this.datos[i]=v;
}

byte Imagen::getPos(int i){
    return this.datos[i];
}


/**
@brief Carga una imagen desde un fichero
@param nombreFichero nombre del fichero que contiene la imagen
@retval true 	si ha tenido éxito en la lectura
@retval false 	si se ha producido algún error en la lectura

Lee desde disco los datos de la imagen llamada @a nombreFichero y la guarda en la memoria. La función debe asegurarse de que la imagen es de un tipo de imagen conocido y de que su tamaño es menor del tamaño máximo permitido (@c MAXDATOS).
*/
bool Imagen::leerImagen(const char nombreFichero[]);


/**
@brief Guarda una imagen desde un fichero
@param nombreFichero nombre del fichero que contiene la imagen
@param esBinario toma el valor @c true si el fichero se escribe en formato binario o @c false en caso contrario.
@retval true 	si ha tenido éxito en la escritura
@retval false 	si se ha producido algún error en la escritura
*/
bool Imagen::escribirImagen(const char nombreFichero[], bool esBinario);
