#include <stdio.h>
/**
 * main - define a new type struct dog
 * @name: variable to hold name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0 on success
 */
struct dog {
char *name;
float age;
char *owner;
};
typedef struct dog dog;
