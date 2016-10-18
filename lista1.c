#include <stdio.h>
struct Carta {
  enum { ouros, espadas, copas, paus } naipe;
  enum { A = 1, J = 11, Q = 12, K = 13 } numero;
};
struct Carta selecionaCarta(int X);
void imprimeCarta(struct Carta carta);
int main() {
int X1=13, X2=42,X3=37;
  struct Carta carta; 
  carta = selecionaCarta(X1);
  imprimeCarta(carta);
  carta = selecionaCarta(X2);
  imprimeCarta(carta);
  carta = selecionaCarta(X3);
  imprimeCarta(carta);
  return 0;
}
void imprimeCarta(struct Carta carta) {
  switch(carta.numero) {
    case A: printf("A "); break;
    case 10: printf("10"); break;
    case J: printf("J "); break;
    case Q: printf("Q "); break;
    case K: printf("K "); break;
    default: printf("%c ", 48 + carta.numero);
  }
  switch(carta.naipe) {
    case ouros: printf("Ouros\n"); break;
    case espadas: printf("Espadas\n"); break;
    case copas: printf("Copas\n"); break;
    case paus: printf("Paus\n"); break;
  }
}
struct Carta selecionaCarta(int X) {
  struct Carta selecionada;
  int id = X%52; // garantir que seja uma das 52 cartas
  int naipe = id/13;
  int numero = id%13 + 1;
  switch(naipe) {
    case 0: selecionada.naipe = ouros; break;
    case 1: selecionada.naipe = espadas; break;
    case 2: selecionada.naipe = copas; break;
    case 3: selecionada.naipe = paus; break;
  }
  switch(numero) {
    case 1: selecionada.numero = A; break;
    case 11: selecionada.numero = J; break;
    case 12: selecionada.numero = Q; break;
    case 13: selecionada.numero = K; break;
    default: selecionada.numero = numero;
  }
  return selecionada;
}
