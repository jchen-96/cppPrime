#include <stdio.h>
int main(int argc, char const *argv[]) {
  /* code */
  int flag=1;
  int i;
  int count;
  int s=0;
  while (flag) {
    /* code */
    scanf("%d",&i );
    if(0==i) break;
    count++;
    s+=i;
  }
  printf("%d,%d\n",s,count );
  return 0;
}
//求解平均工资
// ./input.o |./avg.o
