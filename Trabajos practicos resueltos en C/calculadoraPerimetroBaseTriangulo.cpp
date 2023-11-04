#include <iostream>

using namespace std;

float calculo_perimetro(float b, float a);
float calculo_area(float b, float a);
float producto(float n1, float n2);

main()
{  float base, altura;
   float perimetro, area;
   //entrada
   cout << "CALCULADOR DE PERIMETRO Y AREA" << endl;
   cout << "Ingrese base: ";
   cin >> base;
   cout << "Ingrese altura: ";
   cin >> altura;
   //proceso
   perimetro=calculo_perimetro(base, altura);
   area=calculo_area(base, altura);
   //salida
   cout << "Perimetro: " << perimetro << endl;
   cout << "Area: " << area << endl;
}

float calculo_perimetro(float b, float a)
{
	return 2*b+producto(2, a);
}

float calculo_area(float b, float a)
{
	return b*a;
}

float producto(float n1, float n2)
{ float suma=0;
	while (n2!=0)
	{ suma=suma+1;
	  n2--;
	}
	return suma;	
}
