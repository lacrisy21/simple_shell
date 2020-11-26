#include "elysium.h"

/**
 * IExecuteProgram - Invocation to the EXECVE sytem call.
 * @executablePath: the path to the executable to invoke.
 * @argv: The Varidic arguments passed to the function.
 * @envp: the environment variables passed to the function.
 */
void IExecuteProgram(char *executablePath, char *argv[], char *envp[])
{
	pid_t child;
	int status = 0, result = 0;

	child = fork();
	if (child < 0)
	{
		perror("Fork Failed");
	}
	else if (child == 0)
	{
		result = execve(executablePath, argv, envp);
		if (result == -1)
		{
			_Exit(2);
		}
		else
		{
			kill(child, SIGUSR1);
		}
	}
	do {
		waitpid(child, &status, WUNTRACED);
	} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}

/**
 * _Execve - Finds the program that will be executed
 * @executablePath: the path to the executable to invoke.
 * @argv: The Varidic arguments passed to the function.
 * @envp: the environment variables passed to the function.
 * Return: 0 if Successful, -1 if didn't find or error
 */
int _Execve(char *executablePath, char *argv[], char *envp[])
{
	int result = 0;
	int count = -1;

	while (count < 10)
	{
		if (count == -1)
		{
			IExecuteProgram(executablePath, argv, envp);
		}
		else
		{
			if (envp[count] != NULL)
			IExecuteProgram(Concat(executablePath, envp[count]), argv, envp);
		}
		count++;
	}

	if (result == -1)
	{
		perror("The command wasn't found:");
	}
	return (result);
}

/**
 * HandleSpaces - Handle the spaces of the command passed down
 * to the executable.
 * @executablePath: The Executable path input by the user.
 * @head: Head of the linked list
 */
void HandleSpaces(char *executablePath, parameters *head)
{
	char *readValue;

	readValue = strtok(executablePath, " ");
	while (readValue != NULL)
	{
		parameters *new_node = (parameters *)malloc(sizeof(parameters));

		new_node->data = readValue;
		new_node->next = (parameters *)malloc(sizeof(parameters));
		new_node = head;
		readValue = strtok(NULL, " ");
	}
}

/**
 * ListLength - It counts how many items are there in the linked list.
 * @head: The first element of the list.
 * Return: the number of items contained in the linked list.
 */
int ListLength(parameters *head)
{
	int count = 0;
	parameters *cursor = head;

	while (cursor != NULL)
	{
		count++;
		cursor = cursor->next;
	}
	return (count);
}

/**
 * Concat - Function to concatenate two strings.
 * @executablePath: The main Executable.
 * @path: The path where to find the executable.
 * Return: the concatenated string.
 */
char *Concat(char *executablePath, char *path)
{
	int totalChars = 0, count = 0, iteration = 0;
	char *finalString;

	while (executablePath[count] != '\0')
	{
		totalChars++;
		count++;
	}
	count = 0;

	while (path[count] != '\0')
	{
		totalChars++;
		count++;
	}
	count = 0;
	finalString = (char *)malloc(sizeof(char) * (totalChars + 1));

	while (path[count] != '\0')
	{
		finalString[iteration] = path[count];
		iteration++;
		count++;
	}

	finalString[iteration] = '/';
	count = 0;
	iteration++;

	while (executablePath[count] != '\0')
	{
		finalString[iteration] = executablePath[count];
		iteration++;
		count++;
	}
	return (finalString);
}
