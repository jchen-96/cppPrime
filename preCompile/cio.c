#include <stdio.h>
//输入输出流，错误流
int main(int argc, char const *argv[]) {
  //printf("enter a value：")
  fprintf(stdout, "enter a value:\n" );
  int a;
  //scanf("%s\n", a);
  fscanf(stdin,"%d",&a);
  if (a<0) {
    /* code */
    fprintf(stderr, "the value must>0\n" );
    return 1;
  }
  return 0;
}
