#include <stdio.h>
//Estudiante Jose Angel Diaz.

int calculoMCD (int a, int b);

int main(){
	
	int n1,n2;
	
	printf("Ingrese el primer numero\n");
	scanf("%d",&n1);
	printf("Ingrese el segundo numero\n");
	scanf("%d",&n2);
	
	printf("El MCD es %d",calculoMCD(n1,n2));
	
	getchar();
	
	return 0;
	
}

int calculoMCD (a,b) //Algoritmo de Euclides
{
	int resto;
	
	resto = a%b;
	
	if (resto==0) {
		return b;
	} while (!resto == 0) {
		a = b;
		b = resto;
		if (a%b == 0) {
			return b;
			break;
		}
		
	}
	
}
