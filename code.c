#include <stdio.h>
#include <string.h>
#define SIZE 10
int main() {
 int age;
 char ageMessage[100], missingMessage[100];
 int start, numbers[SIZE], missingNumber, missingIndex;
 printf("Enter your age: ");
 scanf("%d", &age);
 if (age % 2 == 0) {
 strcpy(ageMessage, "\nYour age is EVEN. You will get an EVEN number array.\n");
 start = 2; 
 } 
else {
 strcpy(ageMessage, "\nYour age is ODD. You will get an ODD number array.\n");
 start = 1; 
 }
 printf("%s", ageMessage);
 missingIndex = SIZE / 2;
 missingNumber = start + (missingIndex * 2); 
 int count = 0;
 for (int i = 0, num = start; count < SIZE; i++, num += 2) {
 if (i == missingIndex) { 
 continue;
 }
 numbers[count++] = num;
 }
 strcpy(missingMessage, "\nHere is your array (one number is missing):\n");
 printf("%s", missingMessage);
 for (int i = 0; i < SIZE; i++) {
 printf("%d ", numbers[i]);
 }
 printf("\n");
 int userGuess;
 printf("\nEnter the missing number: ");
 scanf("%d", &userGuess);
 if (userGuess == missingNumber) {
 printf("Booyah! The missing number was %d. \n", missingNumber);
 } else {
 printf("You are an ox. The missing number was %d.", missingNumber);
 }
return 0;
}
