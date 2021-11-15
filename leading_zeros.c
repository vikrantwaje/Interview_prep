
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


int leading_zeros(int num)
{
  int count = 0;
  //num = 0x0F
  while((int)num > 0)
  {
    num = num << 1;
    count++;
  }
  
  return count;
}
int main()
{
  assert(leading_zeros(0x0FF) == 24);
  assert(leading_zeros(0x01) == 31);

}
