#include <iostream>
#include <math.h>

using namespace std;



//prototipo de multiplicacion grande
long double multiplicarGrande(long double numeroUno, long double numeroDos);



//prototipo de suma grande
long  double sumaGrande(long  double numeroUno, long double numeroDos);

int main()
{

	cout << "multiplicacion grade es " << multiplicarGrande(568.56, 5685.545) << endl;
	cout << "la suma grande es " << sumaGrande(5455454545.64544, 5456468484.52610) << endl;
	return 0;
}

//funcion de multiplacion grande
long  double multiplicarGrande(long double numeroUno, long double numeroDos)
{
	return pow(3,(numeroUno * numeroDos));
}

//esta operacion es la suma grande
long double sumaGrande(long  double numeroUno, long  double numeroDos)
{
	return numeroUno + numeroDos;
	
}
