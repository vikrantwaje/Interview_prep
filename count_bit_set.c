
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int count_bit_set(int num)
{
  int count = 0;
  while(num)
  {
    num = num & (num - 1);
    count++;
  }
  return count;
}
int main()
{
    assert(count_bit_set(5) == 2);
    assert(count_bit_set(7) == 3);

}
