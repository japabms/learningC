#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

int letras = 0;
int palavras = 0;
int sentenca = 0;

double indice_cl(int L, int S) { return (0.0588 * L) - (0.296 * S) - 15.8; }

double media_L(int let, int pal) {
  double result = (double)let / pal * 100.00;

  return result;
}

double media_S(int sent, int pal) {
  double result = (double)sent / pal * 100;

  return result;
}

// Main
int main(int argc, char *argv[]) {
  char end_s[3] = {'.', '!', '?'};

  char str[1000000];
  fgets(str, 1000000, stdin);

  int len = strlen(str);

  int i;
  for (int i = 0; i < len; i++) {
    if (isalpha(str[i]))
      letras++;

    if (isspace(str[i]))
      palavras++;

    for (int j = 0; j < 3; j++) {
      if (str[i] == end_s[j])
        sentenca++;
    }
  }
  printf("media_L = %lf\n", media_L(letras, palavras));
  printf("media_S = %lf\n", media_S(sentenca, palavras));

  printf("Grade %d\n", (int)indice_cl(media_L(letras, palavras),
                                      media_S(sentenca, palavras)));

  return 0;
}
