#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog definition
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of dog
 *
 * Description: Dog Definition
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

void free_dog(dog_t *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
