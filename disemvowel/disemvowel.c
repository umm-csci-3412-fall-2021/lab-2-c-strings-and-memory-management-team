#include <stdlib.h>
#include <string.h>


#include "disemvowel.h"

int isVowel(char a);

char *disemvowel(char *str) {
  char *result;
  int counter = 0;
  result = (char*) calloc(strlen(str)+1, sizeof(char));

  for (int i=0; i<strlen(str); i++){
    if(isVowel(str[i])==0){
     result[counter] = str[i];
     counter++;
    }
  }

  result[strlen(str)] = '\0';

  return result;
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