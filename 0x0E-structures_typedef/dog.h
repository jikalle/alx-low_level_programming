#ifndef _DOG_H_
#define _DOG_G_

/**
* struct dog - dog information
* @name: name of dog
* @age: age of dog
* @owner: the owner of the dog
*/
struct dog
{
	char *name;
	char *age;
	char *owner;
};

/**
* dog_t - typedef of struct dog
*/
typedef struct dog dog_t;

int _putchar(char);
void inti_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
