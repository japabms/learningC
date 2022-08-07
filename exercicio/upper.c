#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fin, *fout;
  int ch;

  if ((fin = fopen(argv[1], "r")) == NULL) {
    printf("Não foi possivel abrir o arquivo!\n");
    exit(1);
  }

  if ((fout = fopen(argv[2], "w")) == NULL) {
    printf("Não foi possivel abrir o arquivo\n");
    exit(1);
  }

  while ((ch = fgetc(fin)) != EOF) {
    fputc(toupper(ch), fout);
  }

  fclose(fin);
  fclose(fout);

  return 0;
}

