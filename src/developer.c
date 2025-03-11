#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "developer.h"
#include <_string.h>

void create_new_developer(Developer *const developer, char name[], char alias[]) { //function definition: creates new developer
    if(developer != NULL) {
        strncpy(developer->name, name, sizeof(developer->name) - 1);
        developer->name[sizeof(developer->name) - 1] = '\0';

        strncpy(developer->alias, alias, sizeof(developer->alias) - 1);
        developer->alias[sizeof(developer->alias) - 1] = '\0';
    }
    else {
        printf("Pointer developer is NULL\n");
    }
    
}
    /*Developer developer;
    strncpy(developer.name, name, sizeof(developer.name) - 1);
    developer.name[sizeof(developer.name) - 1] = '\0';

    strncpy(developer.alias, alias, sizeof(developer.alias) - 1);
    developer.alias[sizeof(developer.alias) - 1] = '\0';*/

    //return developer;

void print_new_developer(Developer const *const developer) { //function definition: prints developer's name and alias
    if(developer != NULL) {
        printf("Developer details:\n");
        printf("Name: %s\n", developer->name);
        printf("Alias: %s\n", developer->alias);
    }
    else {
        printf("Pointer developer for printing is NULL\n");
    }
}