#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 * print_address - prints address
 * @ptr: magic
 * Return: no value
 */
void print_address(char *ptr)
{
	int n;
	int start;
	char syst;

	printf("  Entry point address:               0x");

	syst = ptr[4] + '0';
	if (syst == '1')
	{
		start = 26;
		printf("80");
		for (n = start; n >= 22; n--)
		{
			if (ptr[n] > 0)
				printf("%x", ptr[n]);
			else if (ptr[n] < 0)
				printf("%x", 256 + ptr[n]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (syst == '2')
	{
		start = 26;
		for (n = start; n > 23; n--)
		{
			if (ptr[n] >= 0)
				printf("%02x", ptr[n]);

			else if (ptr[n] < 0)
				printf("%02x", 256 + ptr[n]);

		}
	}
	printf("\n");
}
/**
 * print_type - prints type
 * @ptr: magic.
 * Return: no return.
 */
void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("RELOC (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}
/**
 * check_elf - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *ptr)
{
	int address = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (address == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}
