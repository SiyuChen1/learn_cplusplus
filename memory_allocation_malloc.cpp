/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */

int main (){
  int i,n;
  char * buffer;

  printf ("How long do you want the string? ");
  scanf ("%d", &i);

  printf ("Length of buffer point: %lu\n",sizeof(buffer));
  printf ("Length of String: %i\n", i);

  buffer = (char*) malloc (i+1);
  if (buffer==NULL) exit (1);

  printf ("Concent of this allocated memory: %s\n", buffer);

  for (n=0; n<i; n++)
    buffer[n]=rand()%26+'a';
  buffer[i]='\0';

  printf ("Random string: %s\n",buffer);
  free (buffer);

  return 0;
}