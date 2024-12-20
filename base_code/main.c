//
//  main.c
//  Calorie Diary
//
//  Created by Eunju Cha
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cal_exercise.h"
#include "cal_diets.h"
#include "cal_healthdata.h"

#define EXERCISEFILEPATH "exercises.txt"
#define DIETFILEPATH "diets.txt"
#define HEALTHFILEPATH "health_data.txt"

static int choice;

int main() {
	// To initialize the health data object
    HealthData health_data = {0};
    
    // Tocode: to read the list of the exercises and diets
    FILE *fpd=NULL; //fpd=open diets.txt
    FILE *fpe=NULL; //fpe=open exercise.txt
    fpe=fopen("C:/Users/hyshi/Downloads/SMHealthcare/SMHealthcare/base_code/exercises.txt","r");
    fpd=fopen("C:/Users/hyshi/Downloads/SMHealthcare/SMHealthcare/base_code/diets.txt","r");
    
    fgets(char* str, 50, FILE *fpe);
    fgets(char* str, 50, FILE *fpd);

    // ToCode: to run the "Healthcare Management Systems" until all calories are used up or the user wants to exit the system
    do {
    	if (/*kcal*/-1300-(choice*duration)*(choice*duration)==0){ //intake - basic - burned == 0 
            printf("You have consumed all your calories for today! \n");
		} 
		else{
			printf("\n=======================================================================\n");
        	printf("[Healthcare Management Systems] \n");
        	printf("1. Exercise \n");
        	printf("2. Diet \n");
        	printf("3. Show logged information \n");
        	printf("4. Exit \n");
        	printf("Select the desired number: ");
        	scanf("%d", &choice);
        	printf("=======================================================================\n");
        }
        
		// ToCode: to run the sysmtem based on the user's choice
        switch (choice) {
            case 1:
            	loadExercises();
            	inputExercise();
                break;
                
            case 2:
            	loadDiets();
            	inputDiet();
                break;
                
            case 3:
            	printHealthData();
                break;
                
            case 4:
            	
    			printf("Exit the system.\n");
    			printf("=======================================================================\n");
                break;
                
            default:
                printf("[Error] Invalid option. \n");
                printf("Please try again! \n");
        }
    } while (choice==4 ); //if choice==4 -> program end

    return 0;
}

