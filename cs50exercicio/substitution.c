#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int letter_pos(char x) {
  int ans = 0;
  if (isupper(x))
    ans = x - 'A';
  if (islower(x))
    ans = x - 'a';

  return ans;
}

int main(int argc, char *argv[]) {

  char text[10000];
  char cipher_text[10000];
  int pos;

  fgets(text, 10000, stdin);

  if (strlen(argv[1]) > 26 || strlen(argv[1]) < 26) {
    puts("put 26 characters");
    exit(1);
  }

  int len = strlen(text);
  int i, j;
  for (i = 0; i < len; i++) {
    pos = letter_pos(text[i]);
    short int stat = islower(text[i]);
    for (j = 0; j < 26; j++) {
      if (pos == j) {
        if (stat) {
          cipher_text[i] = tolower(argv[1][j]);
        } else {
          cipher_text[i] = argv[1][j];
        }
      } else if (pos == 0) {
        cipher_text[i] = text[i];
      }
    }
  }

  printf("Plain text: %s", text);
  printf("Cipher text: %s\n", cipher_text);

  return 0;
}
