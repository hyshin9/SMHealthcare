//
//  cal_healthdata.c
//  Diets for Calorie Diary
//
//  Created by Eunju Cha
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cal_exercise.h"
#include "cal_diets.h"
#include "cal_healthdata.h"


/*
    description : enter the exercise and diet history in "health_data.txt" 
    input parameters : health_data - data object in which the selected exercise and diet is stored
    return value : No
    
    operation : 1. save the chosen exercise and total calories burned 
    			2. save the chosen diet and total calories intake 
    			3. save the total remaining calrories
*/

void saveData(const char* HEALTHFILEPATH, const HealthData* health_data) {
	int i;
    FILE* file = fopen(HEALTHFILEPATH, "w");
    if (file == NULL) {
        printf("There is no file for health data.\n");
        return;
    }

    // ToCode: to save the chosen exercise and total calories burned 
    fprintf(file, "[Exercises] \n");
    
    
    
    // ToCode: to save the chosen diet and total calories intake 
    fprintf(file, "\n[Diets] \n");



    // ToCode: to save the total remaining calrories
    fprintf(file, "\n[Total] \n");
    
    
}

/*
    description : print the history of exercised and diets
    input parameters : health_data - data object in which the history of the exercise and diet is to be printed
    return value : No
    
    operation : 1. print out the saved history of exercises
    			2. print out the saved history of diets
    			3. print out the saved history of calories
*/

void printHealthData(const HealthData* health_data) {
	int i;
	int intakekcal;
	// ToCode: to print out the saved history of exercises
	printf("=========================== History of Exercise =======================\n");
  	fprintf(file, "Exercise: %i, Calories burned: %i kcal ", choice, choice*duration); //calories burned (option*min)
  	fprintf(file, "Exercise: %i, Calories burned: %i kcal", choice, choice*duration);
  	
  
    printf("=======================================================================\n");

    // ToCode: to print out the saved history of diets
    printf("============================= History of Diet =========================\n");
	fprintf(file, "Food: %i, Calories intake: %i kcal ", choice, intakekcal);
	fprintf(file, "Food: %i, Calories intake: %i kcal ", choice, intakekcal);

    printf("=======================================================================\n");


	// ToCode: to print out the saved history of calories including basal metabolic rate, 
	// total calories burned, total calories intake, and the remaining calories
	printf("============================== Total Calories =========================\n");
 	printf("Basal Metabolic Rate: 1300 kcal\n");
 	printf("Total calories burned: %i kcal\n", (choice*duration)*(choice*duration));
 	printf("Total calories intake: %i kcal\n", intakekcal);
 	printf("The remaining calories: %i kcal", 1300+(choice*duration)*(choice*duration)-intakekcal); //basal metabolic rate+calories burned-calories intake
 
    printf("=======================================================================\n \n");
    
	
	// ToCode: to print out the recommendtaion depending on the current total calories burned and intake    
    if(1300+(choice*duration)*(choice*duration)-intakekcal==0){
    	print("You have consumed all your calories for today!");
    	return 0;    	
    }	else if(1300+(choice*duration)*(choice*duration)-intakekcal<0){
    		printf("[Warning] Too few calories!");
    		if(intakekcal==1300){
    			printf("Your total calorie intake for today has reached your goal!");
			} else if(intakekcal<1300){
				printf("Your total calorie intake for today has not reached your goal, remember to eat more!");
			} else {
				printf("You have eaten more calories than planned today, but you have exersiced too much!");
			}
    		
    	}	else(1300+(choice*duration)*(choice*duration)-intakekcal>0){
    			printf("Please exercise for your health!");
    				if(intakekcal>=1300){
    					printf("Your total calorie intake for today has reached your goal!");
					} else {
							printf("Your total calorie intake for today has not reached your goal, remember to eat more!!");
							}
					}
		    
	 printf("=======================================================================\n");
}
