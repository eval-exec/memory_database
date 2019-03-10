//
// Created by slarsar on 3/9/19.
//
//created ttreebuffer

#include <stdio.h>
#include <string.h>
#include "ttreebuffer.h"

 char input[256];

 char * getinput(){
    while(strcmp(input, "QUIT") != 0)
        {
        printf("Main Memory Database:>> ");
        scanf("%s",input);

        parseinput(input);


    };

};

int parameter_count = 0;
int parseinput(char * input){
//    int start  = 0;
//    int i1;
//    char command[10];
    char  * parameter[256];
//    memset(&command,0,sizeof(command));
//    memset(&parameter,0, sizeof(parameter));
//    strsep()
//    for (i1 = 0;i1 < sizeof(input);i1++){
//        if (input[i1]== ' '){
//            start = 0;
//            continue;
//        }
//        else{
//            parameter[start] = input[i1];
//            start++;
//        }
//    }

    char * buf;
    buf = NULL;
    char * token;
    token = NULL;
    char * delim = " ";
    buf = input;
    while (buf != NULL){
        token = strsep(&buf,delim);
        parameter[parameter_count] = token;


        printf("%s\n",(parameter[parameter_count]));
        parameter_count++;
    }
    return 0;

}
typedef enum{
    SELECT,
    INSERT,
    UPDATE,
    DELETE,
}commands;