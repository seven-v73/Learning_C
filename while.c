#include <stdio.h>

int main (){
  int nombre;
  while(nombre <= 5){
    if (nombre == 3)
    {
      printf("On est arrive a 3\n");
    }
    else
    {
      printf("nombre = %d\n", nombre);
    }

    nombre ++;
  }

  return 0;
}
