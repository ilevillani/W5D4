#include <stdio.h>
//importa libreria math.h che include la funzione sqrt per il calcolo della radice quadrata
#include <math.h>

/*Questo programma, dato un numero D reale immesso da tastiera,
  calcola: 
  a) l'area di un quadrato di lato D;
  b) l'area di un cerchio di diametro D;
  c) l'area di un triangolo equilatero di lato D
*/

int main () {
	
	//dichiara le variabili
	float D;
	float area_quadrato;
	float area_cerchio;
	float pigreco = 3.14;
	float area_triangolo;
	
	printf("Benvenuto! Questo semplice programma ti aiuterà a calcolare l'area di un quadrato, di un cerchio e di un triangolo equilatero.\f\n");
	printf("Tutto ciò che devi fare è inserire un numero decimale.\n");
	printf("Questo numero costituirà la lunghezza del lato del quadrato e del triangolo e il diametro del cerchio.\f\n");
	
	//input da utente per l'inserimento di un numero
	printf("Inserisci un numero decimale:\n");
	//l'input dell'utente viene salvato nella variabile D
	scanf("%f", &D);
	
	//calcola l'area del quadrato
	area_quadrato = D * D;
	printf("\nL'area di un quadrato con un lato di cm %.2f è: %.2f\f", D, area_quadrato);
	
	//calcola l'area del cerchio
	float raggio = D / 2.0;
	area_cerchio = pigreco * (raggio * raggio);
	printf("\nL'area di un cerchio con un diametro di cm %.2f è: %.2f\f", D, area_cerchio);
	
	//calcola l'area del triangolo
	area_triangolo = ((sqrt(3) / 4)* D * D);
	printf("\nL'area di un triangolo equilatero con un lato di cm %.2f è: %.2f\f", D, area_triangolo);
	
	return 0;
}
