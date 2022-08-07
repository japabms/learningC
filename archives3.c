#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fin;
  char *nome;
  int nota;
  if ((fin = fopen(argv[1], "r")) == NULL) {
    printf("Não foi possivel abrir o arquivo\n.");
    exit(1);
  }

  while (fscanf(fin, "%s%d", nome, &nota) != EOF) {
    if (nota >= 5) {
      printf("%s %d\n", nome, nota);
    }
  }

  fclose(fin);

  return 0;
}
