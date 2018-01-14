#include<iostream>
int main(){
  std::cout << "Enter two number：" << '\n';
  int a,b;
  std::cin >> a>>b;
  while (a<=b) {
    std::cout << a << '\n';
    a++;
  }
  int sum=0;
  for (int  i = 0; i < 100; i++) {
    /* code */
    sum+=i;
  }
  std::cout << sum << '\n';

  return 0;
}
