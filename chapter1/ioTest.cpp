#include<iostream>
using namespace std;
int main(){
  //读取定量数据
  std::cout << "Enter two number：" << '\n';
  int v1=0,v2=0;
  std::cin >> v1>>v2;
  std::cout << "the sum of " <<v1<<" and "<<v2<<" is "<<v1+v2<<std::endl;
  // 读取不定量的数据,不同操作系统，文件结束不同　win ctrk z ,unix ctrl d
  int sum=0,val=0;
  while (std::cin >> val) {
    /* code */
    sum+=val;
  }
  std::cout << sum << '\n';
  return 0;
}
