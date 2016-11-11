#include "arreglos_random.h"

int* arreglo_int(size_t num, int min, int max){ //firma de la función.
  int *apt = (int*) malloc(num * sizeof(*apt)); //apuntador a el apartado de memoria en el heap

  time_t seg; //variable de tipo time_t
  time(&seg); //asignación de tiempo a la variable seg
  srand((unsigned int) seg); //seed para el rand()

  /* asignación de valores int aleatorios a la memoria apartada */
  for (int i = 0; i < num; i++){
    apt[i] = rand() % (max - min + 1) + min;
  }
  
  /* regreso del apuntador con los valores aleatorios */
  int* array = apt;

  return array;
}

double* arreglo_double(size_t num, double min, double max){ //firma de la función.
  double *apt = (double*) malloc(num * sizeof(*apt)); //apuntador a el apartado de memoria en el heap

  time_t seg; //variable de tipo time_t
  time(&seg); //asignación de tiempo a la variable seg
  srand((unsigned int) seg); //seed para el rand()

  /* asignación de valores double aleatorios a la memoria apartada */
  for (int i = 0; i < num; i++){
    apt[i] = ( (double)rand() * ( max - min ) ) / (double)RAND_MAX + min;
  }

  /* regreso del apuntador con los valores aleatorios */
  double* array = apt;

  return array;
}