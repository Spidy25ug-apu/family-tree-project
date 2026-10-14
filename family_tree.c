
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
char name[50];
int age;
struct Person *father;
struct Person *mother;
} Person;

Person* create_person(const char *name, int age) {
Person *person = malloc(sizeof(Person));
if (person == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
}

strcpy(person->name, name);
person->age = age;
person->father = NULL;
person->mother = NULL;

return person;

}

int main(void) {
Person *person = create_person("Piyush", 20);

printf("Name: %s\n", person->name);
printf("Age: %d\n", person->age);

free(person);

return 0;
}
