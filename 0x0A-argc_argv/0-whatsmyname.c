#include <stdio.h>

/**
* main - write a program that prints its name, followed by a new line.
* if you rename the programn it will print the new name without having to
* compile it again
* you should not remove the path before the name of the programn
* @argc: This is the argument count
* @argv: This is the argument vector
* Return: return to (0)
*/
int main(int argc, char *argv[]);
{
printf("%s\n", argv[0]);
(void)argc;
return (0);
}
