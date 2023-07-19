#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  gets(str); 

  for(int i=0; i<strlen(str); i++){
    if(str[i] !=32){ // если это просто символ
    printf("%d ", str[i]);
    }


    if(str[i-1] !=32 && str[i] == 32 && str[i+1] !=32){ // если это просто символ И следующий - пробел
    printf("%d ", 32);
    }
  }
  return 0;
}