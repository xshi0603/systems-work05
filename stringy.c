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

char* stringncat(char *dest, char *source, int n){
  int i;
  int len = stringlen(dest);
  for(i = 0; i < n; i++){
    dest[len + i] = source[i];
  }
  dest[len + n] = 0;
  return dest;
}

int main(){

  char s1[] = "Hello";
  char ours1[] = "Hello";
  printf("s1 = %s\n",s1);
  char s2[10] = "";
  char ours2[10] = "";
  printf("s2 = %s\n",s2);
  char s3[] = "Copy";
  char ours3[] = "Copy";
  printf("s3 = %s\n",s3);
  printf("\n");
  
  printf("Testing strlen(s1)\n");
  printf("[standard]: %d\n",strlen(s1));
  printf("[ours]: %d\n",stringlen(ours1));
  printf("\n");

  printf("Testing strcpy(s2,s3)\n");
  printf("[standard]: %s\n",strcpy(s2,s3));
  printf("[ours]: %s\n",stringcpy(ours2,ours3));
  printf("\n");


  char s4[] = "Hey";
  char ours4[] = "Hey";
  printf("s4 = %s\n",s4);
  char s5[] = "Goodbye";
  char ours5[] = "Goodbye";
  printf("s5 = %s\n",s5);
  printf("\n");
  
  printf("Testing strncat(s4,s5,4)\n");
  printf("[standard]: %s\n",strncat(s4,s5,4));
  printf("[ours]: %s\n",stringncat(ours4,ours5,4));
  printf("\n");

}
