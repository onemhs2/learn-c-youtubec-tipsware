// % 키워드 중심의 출력 특성 확인하기

#include <stdio.h>

void main()
{
  int data1 = -1;
  unsigned int data2 = 4294967295;
  printf("%d, %u, %d, %u", data1, data1, data2, data2);
}