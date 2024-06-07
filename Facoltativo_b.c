#include <stdio.h>
#include <math.h>

/*Questo programma, dato un numero D intero o decimale immesso da tastiera, calcola: 
  a) l'area di un quadrato di lato D;
  b) l'area di un cerchio di diametro D;
  c) l'area di un triangolo equilatero di lato D
  Fornisce due output: uno con cifra arrotondata, l'altro con due cifre decimali
*/

int main () {
	
	float D;
	float area_quadrato;
	float area_cerchio;
	float pigreco = 3.14;
	float area_triangolo;
	
	printf("Benvenuto! Questo semplice programma ti aiuterà a calcolare l'area di un quadrato, di un cerchio e di un triangolo equilatero.\f\n");
	printf("Tutto ciò che devi fare è inserire un numero (intero o decimale). Il programma ti fornirà un risultato arrotondato e un risultato in cifre decimali.\f\n");
	printf("Il numero inserito verrà utilizzato per la lunghezza del lato di quadrato e triangolo, e per il diametro del cerchio.\f\n");
	printf("Ricorda che, per separare le cifre decimali, dovrai utilizzare un punto e non una virgola. Es.: 52.18\f\n");
	
	printf("Inserisci un numero: ");
	scanf("%f", &D);
	
	area_quadrato = D * D;
	printf("\nL'area arrotondata di un quadrato con questo lato è: %.0f\n", area_quadrato);
	printf("\nL'area di un quadrato con questo lato con due cifre decimali è: %.2f\n", area_quadrato);
	
	float raggio = D / 2.0;
	area_cerchio = pigreco * pow(raggio,2);
	printf("\nL'area arrotondata di un cerchio con questo diametro è: %.0f\n", area_cerchio);
	printf("\nL'area di un cerchio con questo diametro con due cifre decimali è: %.2f\n", area_cerchio);
	
	area_triangolo = ((sqrt(3)/4)*D*D);
	printf("\nL'area arrotondata di un triangolo equilatero con questo diametro è: %.0f\n", area_triangolo);
	printf("\nL'area di un triangolo con questo diametro con due cifre decimali è: %.2f\n", area_triangolo);
	
	return 0;
}
