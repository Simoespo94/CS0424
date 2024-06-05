#include <stdio.h>

int main() {
int A;
int B;
int media;

printf("Calcolo la media di due numeri:\n");

printf("Inserisci il primo numero");
scanf("%d" , &A);

printf("Inserisci il secondo numero:\n");
scanf ("%d" , &B);

media = (A + B) / 2; 

printf("La media dei due numeri è : %d\n" , media);

return 0;
}