#include <stdio.h>

int main() {
int A;
int B;
int prodotto;

printf("Calcolo moltiplicazione tra due numeri:\n");

printf("Inserisci il primo numero");
scanf("%d" , &A);

printf("Inserisci il secondo numero:\n");
scanf ("%d" , &B);

prodotto = A * B; 

printf("La moltiplicazione dei due numeri è : %d\n" , prodotto);

return 0;
}