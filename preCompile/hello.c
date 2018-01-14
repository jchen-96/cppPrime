#include <stdio.h>
#include "max.h"
#include "min.h"

int main(){
  int a=2;
  int b=3;
  int maxNum=max(a,b);
  int minNum=min(a,b);
  printf("the max value is %d\n",maxNum );
  printf("the min value is %d\n",minNum );
  return 0;
}
