#include <iostream>
using namespace std;


 struct hora{
    int hora;
    int minuto;
    int segundo;
  };

hora crear(int h,int m,int s){
  hora hora;
  hora.hora=h%24;
  hora.minuto=m%60;
  hora.segundo=s%60;
  return hora;
}

void devuelveHora(hora t){
  cout<<t.hora << " "<<t.minuto<< " "<<t.segundo<<endl;
}

/**
Pasar a segundos
*/
int convertirASegundos(hora t){
  int segundos = (t.hora*3600)+(t.minuto*60)+t.segundo;
  return segundos;
}


/**
Dados un instante de tiempo T y un valor
entero S (que representa una cantidad de segundos), devuelva un
nuevo instante de tiempo T2 que represente la suma de S segundos
a T. Los valores de T2 deben estar en los intervalos correctos
*/
hora obtenerNuevoTiempo(hora t,hora s){
  hora nuevo;

  return nuevo;
}
/**
Dados dos instantes de tiempo devuelve true si el segundo
instante es posterior al primero y false en caso contrario.
*/
bool esPosterior(hora t1,hora t2){
  int segundo1 = convertirASegundos(t1);
  int segundo2 = convertirASegundos(t2);

  if (segundo2 > segundo1)
    return true;
  else
    return false;
}



int main(){
  hora tiempo = crear(1,1,3);

  hora tiempo2 = crear(10,10,40);

  devuelveHora(tiempo);

  cout<<"\n"<<convertirASegundos(tiempo);

  cout<<"\n"<<esPosterior(tiempo,tiempo2);


  return 0;
}
