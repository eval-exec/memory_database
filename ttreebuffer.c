//
// Created by slarsar on 3/9/19.
//
//created ttreebuffer

#include <stdio.h>
#include <string.h>
#include "ttreebuffer.h"

 char input[256];

 char * getinput(){
//    while(strcmp(input, "QUIT") != 0)
//        {
//        printf("Main Memory Database:>> ");
//        fgets(input,256,stdin);
//
//        parseinput(input);
//
//
//    };
do {
    printf("Main Memory Database:>> ");
    fgets(input,256,stdin);

    parseinput(input);
}while(0);



};
char  * parameter[256];
int parametercount =0;
int parseinput(char  * indexinput){
//    int start  = 0;
//    int i1;
//    char command[10];

//
//    for (loopi =0;loopi <= strlen(indexinput);loopi++ ){
//        if (indexinput[loopi] != " "){
//            parameter[1] =
//        }
//
//
//    }



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


//
//    buf = strdup(indexinput);
////    while (buf != NULL){
////        token = strsep(&buf,delim);
////        parameter[parameter_count] = token;
////
//////
//////        printf("%s\n",(parameter[parameter_count]));
////        parameter_count++;
////    }

        char * token;
        char * buf;
        buf = strdup(input);




        char * delim;
        delim = " ";
        while ((token = strsep(&buf,delim)) != NULL){
            parameter[parametercount] = strdup(token);
//            puts(parameter[parametercount]);
            parametercount++;



}





//////////////test1 ////////////
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//    int main(){
//        char input[256];
//        int parametercount = 0;
//        char * parameter[256];
//        puts("please input :\n");
//
//        fgets(input,256,stdin);
//        printf("input :%s\n",input);
//        char * token;
//        char * buf;
//        buf = strdup(input);
//        puts("buf = ");
//
//        puts(buf);
//        puts("bufend\n");
//        char * delim;
//        delim = " ";
//        while ((token = strsep(&buf,delim)) != NULL){
////        puts(token);
////        puts("token end \n");
////        parameter[parametercount] = *token;
////        printf("%s\n",parameter[parametercount]);
//            parameter[parametercount] = strdup(token);
//            puts("parameter");
//            puts(parameter[parametercount]);
//            parametercount++;
//
//        }
//        return 0;
//
//    }



//
//    for ( token = strsep(&buf,delim);token != NULL;token = strsep(&buf,delim)){
//        parameter[parameter_count] = token;
//        parameter_count++;
//    }
//
//    return 0;

}

typedef enum{
    SELECT,
    INSERT,
    UPDATE,
    DELETE,
}commands;