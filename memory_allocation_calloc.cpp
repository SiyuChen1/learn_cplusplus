/* calloc example */
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* calloc, exit, free */

int main (){
    // int i,n;
    // int * pData;
    // printf ("Amount of numbers to be entered: ");
    // scanf ("%d",&i);
    // pData = (int*) calloc (i, sizeof(int));

    // printf("Before assigning each elements: ");
    // for (n=0;n<i;n++) printf ("%d ",pData[n]);

    // if (pData==NULL) exit (1);
    // for (n=0;n<i;n++)
    // {
    // printf ("Enter number #%d: ",n+1);
    // scanf ("%d",&pData[n]);
    // }
    // printf ("You have entered: ");
    // for (n=0;n<i;n++) printf ("%d ",pData[n]);
    // free (pData);
    // return 0;

    int i, n;
    unsigned char * pData;
    printf ("Amount of numbers to be entered: ");
    scanf ("%d",&i);
    pData = (unsigned char *) calloc (i, sizeof(unsigned char));

    printf("Length of pData pointer: %lu\n", sizeof(pData));
    printf("Length of each ele in pData: %lu\n", sizeof(pData[0]));
    // for (n=0;n<i;n++) printf ("%c ",pData[n]);

    if (pData==NULL) exit (1);
    
    for (n=0;n<i;n++)
    {
        printf ("Enter number #%d: ",n+1);
        scanf ("%hhu", &pData[n]);
    }

    printf ("You have entered: ");
    for (n=0;n<i;n++) printf ("%hhu ",pData[n]);
    
    free (pData);
    return 0;
}