// Julia Tan
#include <stdio.h>
#include <string.h>

int main() {
	int check = 0;
	int doneAlready = 0;
	int count = 0;
	int l = 0;
	int ll = 0;
	char myString[100];
	char letters[25];
	int first = 0;
	printf("Enter some string:\n");
	fgets(myString, sizeof(myString),stdin); // prompts for string
	int length = (strlen(myString)-1); // length of string
	for (l = 0; l != length; l++){ // for each character in string
		for (ll = 0; ll != length; ll++){
			if (myString[l] == myString[ll]){ // compares current character to others in string
				count ++;
			}
		}
		for (check = 0; check != 26; check ++){ // checks if letter has already been printed
			if (letters[check] == myString[l]){
				doneAlready = 1;
			}
		}
			if (count != 0){ // if the letter is found in the string, add the letter to the array of letters that already been checked
                        letters[first] = myString[l];
			first ++;
			}
		if (doneAlready == 0){ // if the letter hasn't been printed yet, print out the letter with the number of times it is found
			printf("%c = %d\n", myString[l], count);
		}
		count = 0;
		doneAlready = 0;
	}
	return 0;
}
