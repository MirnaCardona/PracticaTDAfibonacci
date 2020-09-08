#include <stdio.h>
#include <stdlib.h>
#include "files.h"

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
{
if(file==NULL)
{
printf("Error: No fue posible gnerar el archivo, revise sus unidades de almacenamiento");
printf("El programa termino de manera anormal");
exit(0);}
else
for(i=0;i<size_t_rows;i++)
  fprintf(file, "%d\t%d\t%d",  buff[i][index], buff[i][RECURSIVE], buff[i][ITERATIVE]);
  
}
