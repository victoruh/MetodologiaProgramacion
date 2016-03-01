/*
Haz un programa que lea una serie de n´umeros enteros (como m´aximo 100) y que elimine
los elementos repetidos guard´andolos en un nuevo array. Debe contener funciones para
leer los elementos de un array, imprimirlo y eliminar los elementos repetidos. Haz una
segunda versi´on de la funci´on para eliminar los elementos repetidos de forma que la
eliminaci´on se haga sobre el mismo array de entrada, sin usar un segundo array auxiliar.
Las funciones implementadas se probar´an desde main.
*/
#include<iostream>
using namespace std;

/**
Leer elementos de un array
*/
void readArray(int array[],int nutil){
  int contador=0;
  int aux;
  do {
  cout<<"\nIntroduzca un entero como valor, sino -1 para finalizar";
  cin >> aux;
  array[contador]=aux;
  nutil=contador;
}while(contador<100 || (aux > 0));
}

void printArray(int array[],int nutil){
  if (nutil==0){
    cout<<"\nArray vacío"<<endl;
  }

  else{
    for (int i=0;i<nutil;i++)
      cout<<array[i]<<" ";
  }
  cout<<endl;
}

/**
Borra repeticiones
@param repe array repetidos
**/
void deleteRepeats(int arry[],int nutil,int repe[]){
  if (nutil==0){
    cout<<"\nArray vacío"<<endl;
  }
  else{
    int aux; //Guardo valor comprobar repetido
    int pos; //Posicion valor repetido
    int pos_repe=0; //Contador para el array de repetidos
    //A lo bestia 0 (n^n). Recorremos el vector entero
    for (int i=0;i<nutil;i++){
      aux=array[i];
      pos=i;
      for (int j=0;j<nutil;j++){
        if (array[j]==aux && j!=pos){
          //Elimino ese valor
          array[i]=0;
          repe[pos_repe]=aux;
          pos_repe++;
        }
      }
    }
  }
}


int main(){
  const int MaxSize = 100;
  int array [100];

  return 0;
}
