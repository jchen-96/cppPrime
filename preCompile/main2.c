#include <stdio.h>
int main(int argc, char const *argv[]) {
  printf("argv is %d\n",argc);
  int i=0;
  for (i = 0; i < argc; i++) {
    /* code */
    printf("argc[%d] is %s\n",i,argv[i] );
  }
  return 0;
}
