#include <stdio.h>

// ano bi
int main(void) {
  int dia,mes,ano;
  int c1,c2,c3,c4,c5;
  printf("dia: ");
  scanf("%d",&dia);
  printf("mês: ");
  scanf("%d",&mes);
  printf("ano: ");
  scanf("%d",&ano);
  c1 = ano - 1900;
  c2 = c1 / 4;
  switch (mes) {
    case 1:
      c3 = 0;
      break;
    case 2:
      c3 = 3;
      break;
    case 3:
      c3 = 3;
      break;
    case 4:
      c3 = 6;
      break;
    case 5:
      c3 = 1;
      break;
    case 6:
      c3 = 4;
      break;
    case 7:
      c3 = 6;
      break;
    case 8:
      c3 = 2;
      break;
    case 9:
      c3 = 5;
      break;
    case 10:
      c3 = 0;
      break;
    case 11:
      c3 = 3;
      break;
    case 12:
      c3 = 5;
      break;
  }
  c4 = (c1 + c2 + dia + c3) % 7;

  switch (c4){
    case 0:
      printf("Você nasceu no Domingo");
      break;
    case 1:
      printf("Você nasceu na Segunda");
      break;
    case 2:
      printf("Você nasceu na Terça");
      break;
    case 3:
      printf("Você nasceu na Quarta");
      break;
    case 4:
      printf("Você nasceu na Quinta");
      break;
    case 5:
      printf("Você nasceu na Sexta");
      break;
    case 6:
      printf("Você nasceu no Sábado");
      break;
  }
  return 0;
}