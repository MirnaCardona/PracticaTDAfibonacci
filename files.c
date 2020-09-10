#include <stdio.h>
#include <stdlib.h>
#include "files.h"
#include "FibMain.h" 

/**
 * Writes a bidimensional buffer array into a file.
 * @param
 *  file (FILE *):
 *      Storage file
 *  columns (size_t ):
 *      length of the buffer array
 *  buff [ ][columns] (long double):
 *      RAM matrix
 *  rows (size_t):
 *      width of the storage buffer
 *
 * @return void.
*/

void file_num_write(FILE * file, size_t columns, long double buff[] [columns], size_t rows)
{int i;
if(file==NULL)
{
printf("Error: No fue posible gnerar el archivo, revise sus unidades de almacenamiento");
printf("El programa termino de manera anormal");
exit(0);}
else
for(i=0;i<rows;i++)
  fprintf(file, "%d\t%Le\t%Le",  buff[i][i], buff[i][RECURSIVE], buff[i][ITERATIVE]);
  
}
