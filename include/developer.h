#ifndef DEVELOPER_H_NHMPTW
#define DEVELOPER_H_NHMPTW

typedef struct {
    char name[30];
    char alias[30];
} Developer;

Developer create_new_developer(char *name, char *alias); //function prototype to create a new object of type developer
void print_new_developer(Developer *developer); //funtion prototype to print the developer's name and alias

#endif DEVELOPER_H_NHMPTW 
