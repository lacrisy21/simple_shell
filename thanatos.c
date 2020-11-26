#include "elysium.h"

/**
 * main - Entry point to the Thanatos Project
 * These are the Styx Gates.
 * Return: Returns 0 is sucess.
 */
int main(void)
{
	int exitPoint = 0, characters = 0;
	size_t buffsize = 32;
	char *buffer, *executablePath, *argv[] = {"", NULL}, *envp[10];

	Asphodel(envp);
	buffer = (char *)malloc(buffsize * sizeof(char));
	OnDisposeBuffer(buffer);
	OrpheusRises();

	while (exitPoint == 0)
	{
		/* write(1, "$ ", 2);*/
		characters = getline(&buffer, &buffsize, stdin);
		OnDispose(characters, buffer);

		executablePath = strtok(buffer, "\n");
		IsExit(characters, buffer);

		_Execve(executablePath, argv, envp);
	}
	free(buffer);
	return (0);
}
