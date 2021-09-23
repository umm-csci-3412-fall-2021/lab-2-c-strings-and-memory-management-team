#include <stdlib.h>
#include <string.h>


#include "disemvowel.h"

int isVowel(char a);

char *disemvowel(char *str) {
  char result[100];
  int counter = 0;
  for(int i = 0; i< strlen(str) ;i++){
    char current = str[i];
    if(isVowel(current) == 0){
      result[counter] = current;
      counter++;
    }
  }
  result[counter] = '\0';
  char* final = (char*) calloc(counter + 1, sizeof(char));
  for(int j = 0; j< strlen(result) - 1 ;j++){
    final[j] = result[j];
  }
  return final;
}

int isVowel(char a){
  char *vowels = "aeiouAEIOU";
  for(int i = 0; i< strlen(vowels);i++){
    if(a == vowels[i]){
      return 1;
    }
  }
  return 0;
}