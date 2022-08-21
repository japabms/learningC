#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fin, *fout;
  int ch;

  // abrir arquivo de origem.
  fin = fopen(argv[1], "rb");

  if (!fin) {
    printf("Não foi possivel abrir o arquivo.\n");
    exit(1);
  }

  // abrindo arquivo de destino.

  if ((fout = fopen(argv[2], "wb")) == NULL) {
    printf("Não foi possivel criar o arquivo.\n");
    exit(2);
  }

  while ((ch = fgetc(fin)) != EOF) {
    fputc(ch, fout);
  }

  fclose(fin);
  fclose(fout);

  return 0;
}
