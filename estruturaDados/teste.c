char *ptr;
ptr = malloc (1);
scanf ("%c", ptr);

typedef struct {
   int dia, mes, ano; 
} data;
data *d;
d = malloc (sizeof (data));
d->dia = 31; d->mes = 12; d->ano = 2016;

printf("%s\n", "Hoje é sabado." );