
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int swap_without_temp(int *a, int *b)
{
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
  
}

int swap_without_temp_v2(int* a, int* b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
int main()
{
    int a = 5;
    int b = 3;
    
    swap_without_temp(&a, &b);
    assert(a == 3 && b == 5);
    
    swap_without_temp_v2(&a,&b);
    assert(a == 5 && b == 3);

}
