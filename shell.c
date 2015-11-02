#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//method call branch for shell.c

int main(int argc, char **argv){
	//char **args;
	size_t length = 0;
	
	while(1){
		char *line;
		printf("$ ");
		//read the line
		getline(&line, &length, stdin);

		//parse it
		int len_of_cmd = strlen(line);

		char **arr = (char **) malloc(len_of_cmd * sizeof(char *));

		int i = 0;

		char *token;
		char delim[] = " ";
		token = strtok(line, delim);	
		while(token != NULL){
			arr[i] = (char *)malloc(strlen(token) + 1);
			arr[i] = token;
			i++;
			
			token = strtok(NULL, delim);
		}

		int j;

		for (j=0;j<i;j++){
			printf("token %i: %s\n", j, arr[j]);
		}
	}
	//free the space
}

