#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cipher(int cod, char character) {
  if (isupper(character)) {
    int val = character - 'A';
    val = (val + cod) % 26;

    return val + 'A';
  }

  if (islower(character)) {
    int val = character - 'a';
    val = (val + cod) % 26;

    return val + 'a';
  }

  return character;
}

int main(int argc, char *argv[]) {
  char str[10000];
  char cipher_str[10000];
  fgets(str, 10000, stdin);

  int len = strlen(str);

  int i;
  for (i = 0; i < len; i++) {
    cipher_str[i] = cipher(atoi(argv[1]), str[i]);
  }

  printf("texto codificado: %s\n", cipher_str);

  return 0;
}
