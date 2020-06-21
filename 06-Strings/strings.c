#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int GetLength(char *);
bool isEmpty(char *);
char *concatenar(char *, char *);
char *power(char *, unsigned int);

int GetLength(char *cadena)
{
    int i = 0;
    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
}

bool isEmpty(char cadena[])
{
    return cadena[0] == '\0';
}

char* concatenar (char *string1, char *string2)
	{

	int i, j=0, longitud1, longitud2;
	char *auxiliar;

	longitud1 = (GetLength(string1)) - 1;
	longitud2 = (GetLength(string2)) - 1;

	auxiliar = string1;
	string1 = (char*) malloc (sizeof(char) * (longitud1 + longitud2));
	string1 = auxiliar;
	for (i=longitud1 + 1; i<=longitud1 + longitud2 + 1; i++)
	{
	string1[i] = string2[j];
	j++;
	}

	return string1;
	}

char * power (char * string1, unsigned int veces){
	int i=0;
	char * auxiliar = string1;

	string1 = (char*) malloc (sizeof(char) * GetLength(string1) * veces);
	string1 = "";
	for (i = 0; i <= veces -1 ; i++){
		string1 = concatenar(string1,auxiliar);
	}
	return string1;
}
    int main()
    {
        char cadena[] = "HOLA";
		
	printf("La potencia es: %s", power(cadena, 2));
	}
