// 전역 변수를 사용하면 함수 간에 데이터 넘겨받기

#include <stdio.h>

int result;

void Sum(int data1, int data2)
{
  result = data1 + data2;
}

void main()
{
  Sum(5, 3);

  printf("5 + 3 = %d\n", result);
}