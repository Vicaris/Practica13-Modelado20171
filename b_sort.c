#include "b_sort.h"

/* firma del método bubble sort */
void bsort(void* base, size_t num, size_t size,
            int (*compar)(const void*, const void*)){
  

  if (sizeof(int) == size){ //verifica que el arreglo sea de enteros
  int *arr = (int*) base; //casting para poder manipular el arreglo
  
  /* bubble sort para enteros */
  int i,j,temp; 
  for (i = 0; i < num; i++){
    for (j = 0; j < num-1; j++){
      if ((compar)(&arr[j], &arr[j+1]) == 1){ //uso del apuntador a función del parámetro para comparar enteros
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  }

  if (sizeof(double) == size){ //verifica que el arreglo sea de doubles
  double *arr = (double*) base; //casting para poder manipular el arreglo
  
  /* bubble sort para doubles */
  int i,j;
  double temp;
  for (i = 0; i < num; i++){
    for (j = 0; j < num-1; j++){
      if ((compar)(&arr[j], &arr[j+1]) == 1){ //uso del aputador a función del parámetro para comparar doubles
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  }
}