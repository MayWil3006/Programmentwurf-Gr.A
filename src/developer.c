#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "developer.h"
#include <_string.h>

Developer create_new_developer(char *name, char *alias) { //function definition: creates new developer
    Developer developer;
    strncpy(developer.name, name, sizeof(developer.name) - 1);
    developer.name[sizeof(developer.name) - 1] = '\0';

    strncpy(developer.alias, alias, sizeof(developer.alias) - 1);
    developer.alias[sizeof(developer.alias) - 1] = '\0';

    return developer;
}
void print_new_developer(Developer *developer) { //function definition: prints developer's name and alias
    printf("Name: %s\n", developer->name);
    printf("Alias: %s\n", developer->alias);
}