#include <stdio.h>

int main(){
    int number ;
    for (number = 1; number <= 10; number ++){
        if(number % 2 == 0){
            printf("%d est paire\n", number);
        }
        else {
            printf("%d est impair\n", number);
        }
    }

    return 0;

}