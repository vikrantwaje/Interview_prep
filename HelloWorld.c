
#include <stdio.h>
#include <stdbool.h>

bool power_of_two(int num)
{
    return num && !(num & (num - 1));
}

bool power_of_four(int num)
{
  return num && !(num & (num - 1)) && !(num & 0xAAAAAAAA);
}

bool power_of_eight(int num)
{
  return num && !(num & (num - 1)) && !(num & 0xB6B6B6B6);
}
int main()
{
    printf("%d\n\r",power_of_two(2));
    printf("%d\n", power_of_two(5));
    
    printf("%d\n\r",power_of_four(16));
    printf("%d\n\r", power_of_four(65));
    
    printf("%d\n\r",power_of_eight(64));
    printf("%d\n\r", power_of_eight(65));
    
}
