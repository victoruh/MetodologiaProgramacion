#include <iostream>
using namespace std;

struct Tiempos {
	int horas, minutos, segundos;
	bool esPosterior(Tiempos T1, Tiempos T2){
		if(convertirASegundos(T1) < convertirASegundos(T2)){
			return true;
		}else{
			return false;
		}
	}

	int convertirASegundos(Tiempos T){
		return ((T.horas*60)*60) + (T.minutos*60) + T.segundos;
	}

	Tiempos obtenerNuevoTiempo(Tiempos T, int s){
		Tiempos T2;
		int tiempo = 0;
		tiempo = convertirASegundos(T);
		tiempo + s;
		return T2;
	}

	bool comprobacion(Tiempos T){
		if(T.horas < 24 && T.horas >= 0)
			if(T.minutos < 60 && T.minutos >=0)
				if(T.segundos < 60 && T.segundos >=0)
					return true;

		return false;
}
	void error(){
		cout << "El tiempo introducido es erróneo" << endl;		
	}

   
} Tiempo;
 
int main() { 
	Tiempos t1 = {24,1,3};
	Tiempos t2 = {2,2,14};
	cout << "Convertir a segundos 1 hora, 1 minuto y 3 segundos: " << Tiempo.convertirASegundos(t1) << " segundos" << endl;
	cout << Tiempo.obtenerNuevoTiempo(t1,5) << endl;
	cout << Tiempo.esPosterior(t1,t2) << endl;
}
