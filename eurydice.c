#include "elysium.h"

/**
 *	OrpheusRises - Prints the constants for the header
 *	of the program.
 */
void OrpheusRises(void)
{
	/*write(1, "PROJECT THANATOS\n\nMain entry point of the", 43);
	write(1, "Mini Shell project for Holberton School.\n", 42);
	write(1, "Authors: Laura Gil And Kaky Rodriguez.\n\n", 42);*/
}

/**
  * Asphodel - Sets the Path.
  * @envp: The environment path variable.
  */
void Asphodel(char *envp[10])
{
	envp[0] = "~";
	envp[1] = "/usr/local/sbin";
	envp[2] = "/usr/local/bin";
	envp[3] = "/usr/sbin";
	envp[4] = "/sbin";
	envp[5] = "/bin";
	envp[6] = "/usr/games";
	envp[7] = "/usr/local/games";
	envp[8] = "/etc";
	envp[9] = NULL;
}

/**
 * OnDispose - Exits the program when a CTRL+D (EOF)
 * Command is reached.
 * @charactersRead: the number of characters read.
 * @buffer: the interface buffer to be liberated.
 */
void OnDispose(int charactersRead, char *buffer)
{
	if (charactersRead == -1)
	{
		free(buffer);
		write(1, "\n", 2);
		exit(0);
	}
}

/**
 * IsExit - Verifies whether the exit command in the Shell has been committed
 * @charactersRead: the number of the characters in the buffer.
 * @buffer: the command to evaluate.
 */
void IsExit(int charactersRead, char *buffer)
{
	char *isExit = "exit";
	int count = 0;

	if (charactersRead > 4)
	{
		while (buffer[count] != '\0')
		{
			if (buffer[count] == isExit[count])
			{
				count++;
			}
			else
			{
				break;
			}
		}

		if (count == 4)
		{
			free(buffer);
			exit(0);
		}
	}
}

/**
 * OnDisposeBuffer - Exits the program if the buffer memory allocation
 * was not possible.
 * @buffer: The array of char to evaluate.
 */
void OnDisposeBuffer(char *buffer)
{
	if (buffer == NULL)
	{
		write(1, "Unable to allocate buffer", 25);
		exit(1);
	}
}
