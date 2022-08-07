#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fin;
  int ch;

  switch (argc) {
  case 1:
    fin = stdin;
    break;
  case 2:
    if ((fin = fopen(argv[1], "r")) == NULL) {
      fprintf(stderr, "Não foi possivel abrir o arquivo %s\n", argv[1]);
      exit(1);
    }
    break;
  default:
    fprintf(stderr, "Sintaxe: \n\n%s [Arquivo]\n", argv[0]);
    break;
  }

  while ((ch = fgetc(fin)) != EOF) {
    putchar(toupper(ch));
  }

  fclose(fin);

  return 0;
}
