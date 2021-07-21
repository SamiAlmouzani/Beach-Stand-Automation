#include <stdio.h>
#include <string.h>

void calculateItemPrice(int* b2, int* a2, char a[][20], int length);

int main(){
	
	printf("\n\nHello, Welcome to the Clarion Beach Stand\n");
	
	// array to hold the string for each prompted item
	char a[4][20] = {"Umbrellas", "Chairs", "Lounge Chairs", "Boogie Boards"};
	
	// initializes the arrays for the number of items before and after 2PM
	int itemsBefore[4];
	int itemsAfter[4];
	int length = sizeof(itemsBefore)/sizeof(itemsBefore[0]);
	
	printf("\n\t\tSold Before 2PM?\n");
	
	// Prompts the user on items sold before 2PM
	for(int i = 1; i <= length; i++){ 	
		printf("\n%d.) How many %s did you sell? ", i, a[i - 1]);
		scanf("%d", &itemsBefore[i-1]);
	}
	
	// Prompts the user on items sold after 2PM	
	printf("\n\t\tSold After 2PM?\n");		
	
	for(int i = 1; i <= length; i++){ 	
		printf("\n%d.) How many %s did you sell? ", i, a[i - 1]);
		scanf("%d", &itemsAfter[i-1]);
	}
			
	calculateItemPrice(itemsBefore, itemsAfter, a, length);	
		
}
