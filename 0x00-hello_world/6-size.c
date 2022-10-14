#include <stdio.h>
/**
 *
 * Print the size of characters
 *
 * Return: 0 (Success)
 */
int main(void)
{
  printf("size of char : %lu bytes\n", sizeof(char));
  printf("size of int : %lu bytes\n", sizeof(int));
  printf("size of long int : %lu bytes\n", sizeof(long int))
  printf("size of a long long int :%lu bytes\n", sizeof(long long int));
  printf("size of flaot : %lu bytes\n", sizeof(float));

  return (0);
}
