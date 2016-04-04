#include "imagen.h"
#include "pgm.h"

Imagen::Imagen(){
  nfilas = 0;
  ncolumnas = 0;
}

Imagen::Imagen(int filas, int columnas){
  nfilas = filas;
  ncolumnas = columnas;

  //i = y ∗ columnas + x
  //Recorremos de forma secuencial el vector y lo ponemos a negro cada posicion
  for (int i=0;i<ncolumnas*nfilas;i++){
    datos[i]=0;
  }
}

void Imagen::crear(int filas,int columnas){
  nfilas = filas;
  ncolumnas = columnas;

  for (int i=0;i<ncolumnas*nfilas;i++)
    datos[i]=0;
}

int Imagen::filas(){
  return nfilas;
}

int Imagen::columnas(){
  return ncolumnas;
}

void Imagen::set(int y, int x, byte v){
  datos[y*ncolumnas+x]=v;
}

byte Imagen::get(int y, int x){
  return datos[y*ncolumnas+x];
}

void Imagen::setPos(int i, byte v){
  datos[i]=v;
}

byte Imagen::getPos(int i){
    return datos[i];
}


/**
@brief Carga una imagen desde un fichero
@param nombreFichero nombre del fichero que contiene la imagen
@retval true 	si ha tenido éxito en la lectura
@retval false 	si se ha producido algún error en la lectura

Lee desde disco los datos de la imagen llamada @a nombreFichero y la guarda en la memoria. La función debe asegurarse de que la imagen es de un tipo de imagen conocido y de que su tamaño es menor del tamaño máximo permitido (@c MAXDATOS)
*/
bool Imagen::leerImagen(const char nombreFichero[]){
  //Nos aseguramos de que la imagen sea de tipo PGM
  TipoImagen img = infoPGM(nombreFichero,this->nfilas,this->ncolumnas);
  if (this->nfilas*this->ncolumnas <= this->MAXPIXELS){
      return leerPGMBinario(nombreFichero, this->datos, this->nfilas, this->ncolumnas);
  }
  else
    return false;
}

/**
@brief Guarda una imagen desde un fichero
@param nombreFichero nombre del fichero que contiene la imagen
@param esBinario toma el valor @c true si el fichero se escribe en formato binario o @c false en caso contrario.
@retval true 	si ha tenido éxito en la escritura
@retval false 	si se ha producido algún error en la escritura
*/
bool Imagen::escribirImagen(const char nombreFichero[], bool esBinario){
  return escribirPGMBinario (nombreFichero, this->datos, this->nfilas, this->ncolumnas);
}
