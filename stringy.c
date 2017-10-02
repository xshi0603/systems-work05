#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringy.h"

int stringlen(char *str){
  int count = 0;
  while(str[count])
    count++;
  return count;
}

char* stringcpy(char *dest, char *source){
  int i;
  for(i = 0; i < strlen(source);i++){
    dest[i] = source[i];
  }
  dest[i] = 0;
  return dest;
}

int main(){

  char s1[] = "Hello";
  printf("s1 = %s\n",s1);
  char s2[10];
  printf("s2 = %s\n",s2);
  char s3[] = "Copy";
  printf("s3 = %s\n",s3);
  printf("\n");
  
  printf("Testing strlen(s1)\n");
  printf("[standard]: %d\n",strlen(s1));
  printf("[ours]: %d\n",stringlen(s1));
  printf("\n");

  printf("Testing strcpy(s2,s3)\n");
  printf("[standard]: %s\n",strcpy(s2,s3));
  printf("[ours]: %s\n",stringcpy(s2,s3));

}
