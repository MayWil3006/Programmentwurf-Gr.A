#ifndef DEVELOPER_H_NHMPTW
#define DEVELOPER_H_NHMPTW

/*
developer.h defines developer struct
and function prototypes
*/

#define MAX_NAME 30
#define MAX_ALIAS 30

typedef struct { //struct mit 2 char arrays die Namen und alias speichern
    char name[MAX_NAME];
    char alias[MAX_ALIAS];
} Developer;

/*
function prototype to initialize a developer struct with a name and an alias
*/
void create_new_developer(Developer *const developer_ptr, const char name[], const char alias[]); 

/*
function prototype to print the developers details
*/
void print_new_developer(Developer const *const developer_ptr);

#endif //DEVELOPER_H_NHMPTW 

