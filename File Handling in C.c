#include<stdio.h>
#include<stdlib.h> //exit()
#include<string.h>

void removeNewLine(char *str);
void getFilename(char *filename);
void getInputData(char *data);
void createFile();
void writeFile();
void updateFile();
void readFile();
void deleteFile();

int main(){
	int choice;
	while(1){
		printf("\n----- File Handling in C -----\n");
		printf("1. Create File\n");
		printf("2. Write to File\n");
		printf("3. Update File\n");
		printf("4. Read File\n");
		printf("5. Delete File\n");
		printf("6. Exit\n");
		printf("Enter your choice (1-6): ");
		scanf("%d", &choice);
		getchar();
		
		switch(choice){
			case 1: createFile(); break;
			case 2: writeFile(); break;
			case 3: updateFile(); break;
			case 4: readFile(); break;
			case 5: deleteFile(); break;
			case 6: exit(0);
			default: 
				printf("Invalid Choice! Please enter choice between 1 to 6.\n");
		}
		
	}
	return 0;
}

void removeNewLine(char *str){
	str[strcspn(str, "\n")] = 0;
}

void getFilename(char *filename){
	printf("Enter File Name: ");
	fgets(filename, 100, stdin);
	removeNewLine(filename);
}

void getInputData(char *data){
	printf("Enter Text: ");
	fgets(data, 1000, stdin);
	removeNewLine(data);
}

void createFile(){
	char filename[100];
	FILE *fp;
	getFilename(filename);
	fp = fopen(filename, "w");
	if(fp == NULL){
		printf("Error creating File\n");
	}
	else{
		printf("File %s created successfully\n", filename);
		fclose(fp);
	}
}

void writeFile(){
	char filename[100], data[1000];
	FILE *fp;
	getFilename(filename);
	
	fp = fopen(filename, "r");
	if(fp == NULL) {
		printf("File does not exist. Create it First.\n");
		return;
	}
	fclose(fp);
	fp = fopen(filename, "w");
	if( fp == NULL) {
		printf("Error opening File.\n");
	}
	else {
		getInputData(data);
		fputs(data, fp);
		printf("Data written successfully.\n");
		fclose(fp);
	}
}

void updateFile(){
	char filename[100], data[1000];
	FILE *fp;
	
	getFilename(filename);
	
	fp = fopen(filename, "r");
	if(fp == NULL) {
		printf("File does not exist. Create it First.\n");
		return;
	}
	fclose(fp);
	
	fp = fopen(filename, "a");
	if (fp==NULL){
		printf("Error opening File.\n");
	}
	else {
		getInputData(data);
		fputs(data, fp);
		printf("Data appended successfully!\n");
		fclose(fp);
	}
}

void readFile(){
	char filename[100];
	FILE *fp;
	getFilename(filename);
	fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("File not Found!\n");
	}
	else {
		char ch;
		while((ch = fgetc(fp)) != EOF){
			putchar(ch);
		}
		fclose(fp);
		printf("\n");
	}
}

void deleteFile(){
	char filename[100];
	getFilename(filename);
	if(remove(filename) == 0){
		printf("File Deleted Successfully!\n");
	}
	else {
		printf("Error deleting file.\n");
	}
}









