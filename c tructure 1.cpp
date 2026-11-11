#include <stdio.h>
#include <string.h>

struct Student{
	char name[50];
	int age;
	char email[50];
	float height;
	char regNo[30];
};

int main(){
	struct Student S1, S2;
	
	// ---Student 1:
	strcpy(S1. name, "Peter");
	S1.age = 19;
	strcpy(S1.email, "peter362@gmail.com");
	S1.height = 1.82;
	strcpy(S1.regNo, "BCS-01-0558/2026");
	
	// ---Student 2:
	strcpy(S2.name, "Brivian");
	S2.age = 20;
	strcpy(S2.email, "brivian05@gmail.com");
	S2.height = 1.75;
	strcpy(S2.regNo,"BCS-02-0558/2026");
	
	// ---student S1 ---
	printf("--- student 1 ---\n");
	printf("Name : %s\n", S1.name);
	printf("Age : %d\n", S1.age);
	printf("Email : %s\n", S1.email);
	printf("Height : %.2f\n", S1.height);
	printf("RegNo : %s\n", S1.regNo);
	
	//--- student S2 ---
	printf("--- Student 2 ---\n");
	printf("Name : %s\n", S2.name);
	printf("Age : %d\n", S2.age);
	printf("Email : %s\n", S2.email);
	printf("Height : %.2f\n", S2.height);
	printf("RegNo : %s\n", S2.regNo);
	
	return 0;
	
	}
