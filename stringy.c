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
  for(i = 0; i < stringlen(source);i++){
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

int stringcmp( char *s1, char *s2 ) {
  int i;
  if (stringlen(s1) == stringlen(s2)) {
    for (i = 0; i < stringlen(s1) && i < stringlen(s2); i++) {
      if (s1[i] > s2[i]) {
	return 1;
      }
      else if (s1[i] < s2[i]) {
	return -1;
      }
    }
  }
  if (stringlen(s1) > stringlen(s2)) {
    return -1;
  }
  else if (stringlen(s1) < stringlen(s2)) {
    return 1;
  }
  return 0;
}

char * stringchr( char *s, char c ) {
  int i;
  for (i = 0; i < stringlen(s); i++) {
    if (s[i] == c) {
      return s;
    }
  }
  return NULL;
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
  printf("[standard]: %zu\n",strlen(s1));
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

  char s6[] = "Sup";
  char ours6[] = "Sup";
  printf("s6 = %s\n",s6);
  char s7[] = "Pce";
  char ours7[] = "Pce";
  printf("s7 = %s\n",s7);
  char s8[] = "Zz";
  char ours8[] = "Zz";
  printf("s8 = %s\n",s8);
  char s9[] = "Pizza";
  char ours9[] = "Pizza";
  printf("s9 = %s\n",s9);
  char s10[] = "Sup";
  char ours10[] = "Sup";
  printf("s10 = %s\n",s10);
  printf("\n");

  printf("Testing strcmp(s6,s7)\n");
  printf("[standard]: %d\n",strcmp(s6,s7));
  printf("[ours]: %d\n",stringcmp(ours6,ours7));
  printf("\n");

  printf("Testing strcmp(s6,s8)\n");
  printf("[standard]: %d\n",strcmp(s6,s8));
  printf("[ours]: %d\n",stringcmp(ours6,ours8));
  printf("\n");

  printf("Testing strcmp(s6,s9)\n");
  printf("[standard]: %d\n",strcmp(s6,s9));
  printf("[ours]: %d\n",stringcmp(ours6,ours9));
  printf("\n");

  printf("Testing strcmp(s6,s10)\n");
  printf("[standard]: %d\n",strcmp(s6,s10));
  printf("[ours]: %d\n",stringcmp(ours6,ours10));
  printf("\n");

  char s11[] = "Big brown doggy";
  char ours11[] = "Big brown doggy";
  printf("s11 = %s\n",s11);
  char s12[] = "B";
  char ours12[] = "B";
  printf("s12 = %c\n", s12);
  printf("\n");

  printf("Testing strchr(s11,\"B\")\n");
  printf("[standard]: %s\n",strchr(s11,s12));
  printf("[ours]: %s\n",stringchr(s11,s12));
  printf("\n");
}
