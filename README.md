## Arquivos

### Como abrir arquivo

usando o tipo FILE * var
com essa variavel de tipo FILE vai ser possivel aplicar as funções para manipular elas (mulheres)


Funções para manipulação de arquivos em stream.

Funcão para abrir o arquivo, caso contrario devolve NULL; 
>fopen("nome do arquivo", "modo de abertura");


### Modos de abertura kekw
"r"  = read  , esse aqui é basta ler.
"w"  = write , caso já existir um algo no arquivo, apaga e em seguida escreve algo.
"a"  = append, acrescenta o conteudo no final do arquivo.

"r+, w+ e a+" = abrem o arquivo em modo de escrita e leitura.

### Modos de abertura só que binario (based)
"rb, wb, ab" = tem a mesma funcão que os acima, só que eles mexem com tudo, não só texto.

Função para fechar o arquivo no final do programa. (boas praticas)
>fclose(FILE *arquivo);

Essa função grava todos os dados em arquivo, mas mantém aberto o arquivo.
>fflush(FILE *arquivo);
Serve também pra limpar o stdin.

Função que vai ler os caracteres do arquivo.
>fgetc(FILE *arq);
Aplicação no "archives.c".

Função para escrever caracteres em um arquivo;
>fputc(int ch, FILE *arq);

#cansei já


