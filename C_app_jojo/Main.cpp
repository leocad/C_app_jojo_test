#include <stdio.h>
#include <string>
#include <stdlib.h>

	

int main() {
	
	char typen_password[100];

	printf("welcom\n please type a password : \n");
		
		scanf_s("%s", typen_password);
		printf("pass : %s", typen_password);

	
	return 0;
	}
bool passwordChecker(char password_user[]) {
	char password[] = "salut";

	if (password_user == password) {
		return true;
	}
	else {
		return false;
	}

}

