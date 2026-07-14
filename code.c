#include <stdio.h>

int main(){
  int nombre;
  for(nombre = 1; nombre <= 5; nombre ++)
  {
    if(nombre % 2 == 0)
    {
      printf("%d est pair\n", nombre);
    }
    else
    {
      printf("%d est impair\n", nombre);
    }
  }
}
