#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
#define FNAME "elenco.csv"
// Definisci il tipo di dato struct s_studente
struct s_studente {
char nome[MAX_STRLEN+1];
char cognome[MAX_STRLEN+1];
int eta;
char classe[MAX_STRLEN+1];
};
// Definisci studente come struct s_studente
typedef struct s_studente studente;
int main(int argc, char** argv) {
FILE *puntafile;
studente lista;
int i;
puntafile=fopen(FNAME, "w");
if (puntafile == NULL) {
printf("Il file non puo' essere aperto");
}
else {
fprintf(puntafile, "nome;cognome;eta';classe\n");
for (i=0;i<N;i++) {
printf("studente %d:\n", i+1);
printf("nome: ");
scanf("%s", lista.nome);
printf("cognome: ");
scanf("%s", lista.cognome);
printf("eta': ");
scanf("%d", &lista.eta);
printf("classe: ");
scanf("%s", lista.classe);
fprintf(puntafile, "%s;%s;%d;%s\n", lista.nome, lista.cognome, lista.eta, lista.classe);
}

fclose(puntafile);
}
return (EXIT_SUCCESS);
}

