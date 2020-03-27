#include <iostream>
#include <vector>

using namespace std;

struct Elemento {
	float peso;
	int beneficio;
};


class Mochila {

	public:
	
	int capacidad;
	int num_elem = 10;
	float PesoBeneficio[num_elem];

	Mochila (int capacidad) {
		this -> capacidad = capacidad;
		
		elemento elementos[num_elem];
		int solucion[num_elem];

		for (int i=0; i<num_elem; i++){
			elementos[i].peso = (rand()%10)+1;
			elementos[i].beneficio = (rand()%15)+1;
			PesoBeneficio[i] = elementos[i].peso/elementos[i].beneficio;
		}

		for (int i = 0; i < num_elem -1; i++){
		
		
		}
		
	}

	LlenarMochila () {
	
	}

	ImprimirMochila () {
	
	
	}

};

int main {

	


	return 0;
};
