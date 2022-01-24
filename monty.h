#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// #define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define DELIMITERS (" \n\t\v\f")
#define freedata(DATA)                  \
	do {                                \
		free((DATA).buffer);            \
		free_stack((DATA).stack);       \
		fclose((DATA).pointer_to_file); \
	} while (0)
#endif