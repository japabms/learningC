#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  int ch;
  //  -- VERIFICAR SE O ARQUIVO PODE SER ABERTO --
  if (argc != 2) {
    printf("Sintaxe: \n\n%s Arquivo\n\n", argv[0]);
    exit(1);
  }

  fp = fopen(argv[1], "r");
  if (!fp) {
    printf("Não foi possivel abrir o arquivo\n");
    exit(2);
  }
  // -- FUNÇÃO PARA EXIBIR O CONTEUDO DO ARQUIVO --
  printf("%c", fgetc(fp));

  // enquanto a ch receber um caracter não nulo ele vai dar display no conteudo
  // com a func putchar.
  while ((ch = fgetc(fp)) != EOF) {
    putchar(ch);
  }

  fclose(fp);
  return 0;
}
