#include<stdlib.h>
#include<stdlib.h>

	int main()
{
	int Numeros=15, Num=0, NumS=0, Promedio=0, NumM=0;
	printf("Ingrese 15 numeros: \n");

	while (Numeros>0)
	{
		scanf("%d" , &Num);
		NumS=Num+NumS;
		Promedio=NumS/15;
	Numeros--;

		if (Num>NumM)
		{
		NumM=Num;
		}
	}
printf("El numero promedio es %d y el numero mayor %d", Promedio, NumM);
}
