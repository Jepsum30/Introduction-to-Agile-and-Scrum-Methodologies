//Made by Imani Leary
#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME 256
#define MAX_LINE 1024

void readFile(const char* fileName) {
	FILE* file= fopen(fileName, "r");
	
	if (!file) {
		printf("eError: Could not open file %s\n", fileName);
		return;
	}
	
	char line[MAX_LINE];
	while (fgets(line, sizeof(line), file)) {
		printf("%s", line);
	}
	
	fclose(file);
}

int main() {
	char fileName[MAX_FILENAME];
	
	printf("Enter the filename to read: ");
	if (scanf("%255s", fileName) != 1) {
		printf("Error reading filename. \n");
		return 1;
	}
	
	readFile(fileName);
	
	return 0;
}
