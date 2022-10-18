#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);
