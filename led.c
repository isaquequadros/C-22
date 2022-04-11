#include <stdio.h>
#include <stdlib.h>

float Vin = 0.0, 
	 Vled = 0.0,
     Iled = 0.0,
     R    = 0.0;
     
int main(int argc, char *argv[])
{
	printf(" ---- Calculadora LED v1.0 ----    \n\n");	
	printf(" ---- Autor: Isaac         ----    \n\n");
	printf(" ---- UniCesumar           ----    \n\n");
	
	printf(" Digite o valor de Vin (em Volts): ");
	scanf("%f",&Vin);
	printf("\n\n");
	printf(" Digite o valor de Vied (em Volts): ");
	scanf("%f",&Vled);
	printf("\n\n");
	printf(" Digite o valor de Iied (em Amperes): ");
	scanf("%f",&Iled);
	printf("\n\n");

	R = (Vin-Vled)/Iled;

	printf("Vin  = %.2f\n\n",Vin);
	printf("Vled = %.2f\n\n",Vled);
	printf("Iled = %.2f\n\n",Iled);
	printf("O valor do resistor para o LED foi de %.2f Ohms\n\n",R);

	system("pause");
return 0;
}
