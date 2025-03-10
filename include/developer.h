#ifndef DEVELOPER_H_NHMPTW
#define DEVELOPER_H_NHMPTW

typedef struct {
    char name[30];
    char alias[30];
} Developer;

Developer create_new_developer(char *name, char *alias); //creates a new Developer-object
void print__new_developer(Developer *dev); //prints the developer's name and alias to the console

#endif DEVELOPER_H_NHMPTW 
