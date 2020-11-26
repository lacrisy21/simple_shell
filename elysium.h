#ifndef ELYSIUM_H
#define ELYSIUM_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 *  struct parameters - Linked list containing the parameters
 *  passed to the executable.
 *  @data: the actual parameter.
 *  @next: container for the pointer on the next value.
 */
typedef struct parameters
{
	char *data;
	struct parameters *next;
} parameters;

void OnDispose(int charactersRead, char *buffer);
void OnDisposeBuffer(char *buffer);
void IExecuteProgram(char *executablePath, char *argv[], char *envp[]);
void OrpheusRises(void);
void HandleSpaces(char *executablePath, parameters *head);
int ListLength(parameters *head);
void Asphodel(char *envp[10]);
int _Execve(char *executablePath, char *argv[], char *envp[]);
char *Concat(char *executablePath, char *path);
void IsExit(int charactersRead, char *buffer);

#endif
