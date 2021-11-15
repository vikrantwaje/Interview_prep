
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int reverse_bit(unsigned int  num)
{
  num = ((num & 0xAAAAAAAA) >> 1)  | ((num & 0x55555555) << 1);
  num = ((num & 0xCCCCCCCC) >> 2)  | ((num & 0x33333333) << 2);
  num = ((num & 0xF0F0F0F0) >> 4)  | ((num & 0x0F0F0F0F) << 4);
  num = ((num & 0xFF00FF00) >> 8)  | ((num & 0x00FF00FF) << 8);
  num = ((num & 0xFFFF0000) >> 16)  | ((num & 0x0000FFFF) << 16);
  
  return num;
}

int reverse_bit_v2(unsigned int num)
{
  unsigned int result = 0;
  int i = 0;
  while(i < 32)
  {
    result = result << 1;
    result |= (num & 1);
    num = num >> 1;
    i++;
  }
  return result;
}
int main()
{
    assert(reverse_bit_v2(0x0F) == 0xF0000000);
    assert(reverse_bit(0xFF) == 0xFF000000);

}
