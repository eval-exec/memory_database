#include <stdio.h>
int main(){
	char input[256];
	while(input != "quit"){
		printf("MEMORY_DATABASE-->:");
		gets(input);
		printf("%s",input);
	}
	return 0;
}
