#include <stdio.h>
#include <stdlib.h>

// Versão low effort do livro Linguaguem C

#define MAX_LIN 80
#define SINAL '-'

int main(int argc, char *argv[]) {
  FILE *fp = stdin;
  char s[MAX_LIN + 1];
  int i = 0;
  int n_lins = 10;

  switch (argc) {
  case 1:
    break;
  case 2:
    if (argv[1][0] == SINAL) {
      n_lins = atoi(argv[1] + 1);
    } else {
      if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Erro\n");
      }
    }
    break;
  case 3:
    if (argv[1][0] != SINAL) {
      printf("Erro\n");
    } else {
      n_lins = atoi(argv[1] + 1);
      if ((fp = fopen(argv[2], "r")) == NULL)
        printf("erro\n");
    }
    break;
  default:
    printf("erro\n");
    break;
  }

  while ((fgets(s, MAX_LIN + 1, fp) != NULL && i++ < n_lins)) {
    fputs(s, stdout);
  }
  return 0;
}
