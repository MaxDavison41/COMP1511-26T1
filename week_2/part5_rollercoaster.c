// part5_roller_coaster
//
// This program was written by Max Davison z5492092
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MIN_HEIGHT 100
#define THRESHOLD 160

int main(void) {
	
	int height = 0;
	printf("What is your height? ");
	scanf("%d", &height);

	if (height < 0) {
		printf("Wow, that is impossible! (ERROR)\n");
	}  else if (height < MIN_HEIGHT) {
		printf("You are too short! :(\n");
	} else if (MIN_HEIGHT <= height && height < THRESHOLD) {
		printf("You are tall enough to ride but you need an adult!\n");
	} else {
		printf("You can ride!!!\n");
	}
	
	return 0;
}
