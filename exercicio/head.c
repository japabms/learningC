#include <stdio.h>
#include <stdlib.h>

// Versão do comando Head que eu tirei da minha cabeça.
// contém erros ainda

int lines_file(char *str) {
  int ch, aux = 0;
  FILE *txt;
  txt = fopen(str, "r");

  while ((ch = fgetc(txt)) != EOF) {
    if (ch == 10) {
      aux++;
    }
  }

  return aux;
}

int main(int argc, char *argv[]) {
  FILE *fin;
  int n, ch, i;
  // argv = head -10 teste.txt

  switch (argc) {
  case 1:
    // head
    fin = stdin;
    n = 10;
    for (i = 0; i < n; i++) {
      while ((ch = fgetc(stdin)) != 10) {
        putchar(ch);
      }
      putchar(10);
    }
    break;

  case 2:
    if ((fin = fopen(argv[1], "r")) == NULL) {
      sscanf(argv[1], "-%d", &n);
      fin = stdin;

      for (i = 0; i < n; i++) {
        while ((ch = fgetc(fin)) != 10) {
          putchar(ch);
        }
        putchar(10);
      }
    } else {
      for (i = 0; i < 10; i++) {
        while ((ch = fgetc(fin)) != 10) {
          putchar(ch);
        }
        putchar(10);
      }
    }
    break;

  case 3:
    if ((fin = fopen(argv[2], "r")) == NULL) {
      fprintf(stderr, "Não foi possivel abrir o arquivo\n");
      exit(1);
    }

    sscanf(argv[1], "-%d", &n);
    if (n > lines_file(argv[2]))
      n = lines_file(argv[2]);

    for (i = 0; i < n; i++) {
      while ((ch = fgetc(fin)) != 10) {
        putchar(ch);
      }
      putchar(10);
    }

    break;
  }

  fclose(fin);

  return 0;
}
