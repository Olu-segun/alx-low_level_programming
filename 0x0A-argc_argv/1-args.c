#include <stdio.h>

#include "main.h"

/**
 * main -> program that prints the number of arguments passed into it
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))

{

		printf("%d\n", argc - 1);

			return (0);

}
