#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * * infinite_while - function that contains an infinite lopp
 * *
 * * Return: 0
 * */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * * main - Entry point
 * *
 * * Return: Always 0
 * */

int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		if (fork() == 0)
		{

		}
		infinite_while();
		return (0);
	}
}
