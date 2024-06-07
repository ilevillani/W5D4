#include <stdio.h>

/*Questo programma, dati 3 numeri immessi da tastiera,
  calcola la media aritmetica dei numeri e stampa
  il risultato con due cifre decimali e arrotondato
*/

int main() {
    float primo_numero;
	float secondo_numero;
	float terzo_numero;
	float somma;
	double media;
	
	printf("Benvenuto! Questo semplice programma ti aiuterà a calcolare la media di tre numeri interi o decimali.\f\n");
	printf("Tutto ciò che devi fare è inserire, uno alla volta, i tre numeri. Il programma ti fornirà un risultato arrotondato e un risultato in cifre decimali.\f\n");
	printf("Ricorda che, per separare le cifre decimali, dovrai utilizzare un punto e non una virgola. Es.: 52.18 \f\n");
	
	//Le seguenti righe di codice prendono l'input dall'utente e lo salvano nelle variabili
    printf("Inserisci il primo numero: ");
    scanf("%f", &primo_numero);
	printf("Inserisci il secondo numero: ");
	scanf("%f", &secondo_numero);
	printf("Inserisci il terzo numero: ");
	scanf("%f", &terzo_numero);
	
	printf("\n");
	
	//Calcola la somma
	somma = primo_numero + secondo_numero + terzo_numero;
	
	//Calcola la media
    media = somma / 3;

    //Stampa la media con due cifre decimali
    printf("La media aritmetica con due cifre decimali è: %.2f\f\n", media);

    //Stampa la media arrotondata senza cifre decimali
    printf("La media aritmetica arrotondata è: %.0f\n", media);

    return 0;
}