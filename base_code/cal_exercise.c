//
//  cal_exercise.c
//  Excercise for Calorie Diary
//
//  Created by Eunju Cha
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cal_exercise.h"
#include "cal_diets.h"
#include "cal_healthdata.h"

#define MAX_EXERCISES 100  			// Maximum number of exercises
#define MAX_EXERCISE_NAME_LEN 50	// Maximum length of the name of exercise


// To declare the structure of the exercises
static Exercise exercise_list[MAX_EXERCISES];
int exercise_list_size = 0;


/*
    description : read the information in "excercises.txt"
*/

void loadExercises(const char* EXERCISEFILEPATH) {
    FILE *file = fopen(EXERCISEFILEPATH, "r");
    if (file == NULL) {
        printf("There is no file for exercises! \n");
        return;
    }

    // ToCode: to read a list of the exercises from the given file
    while (file!=EOF) {
    	file=fopen("C:/Users/hyshi/Downloads/SMHealthcare/SMHealthcare/base_code/exercises.txt", "r"); //local path of exercise.txt
    	
        if (exercise_list_size >= MAX_EXERCISES){
        	break;
		}
    }

    fclose(file);
}


/*
    description : to enter the selected exercise and the total calories burned in the health data
    input parameters : health_data - data object to which the selected exercise and its calories are added 
    return value : No
    
    operation : 1. provide the options for the exercises to be selected
    			2. enter the duration of the exercise
    			3. enter the selected exercise and the total calories burned in the health data
*/

void inputExercise(HealthData* health_data) {
    int choice, duration, i;
    
    // ToCode: to provide the options for the exercises to be selected
    printf("The list of exercises: \n");
	printf("1. walking - 4 kcal\n");
	printf("2. running - 11 kcal\n");
	printf("3. riding - 5 kcal\n");
	printf("4. swimming - 12 kcal\n");
	printf("5. pilates - 4 kcal\n");
	printf("6. yoga - 2 kcal\n");
	
    // ToCode: to enter the exercise to be chosen with exit option
	printf("7. Exit\n");
	printf("Select the desired number and duration:");
	scanf("%i %i", &choice, &duration);
    
    // To enter the duration of the exercise
    printf("Enter the duration of the exercise (in min.): ");
    scanf("%d", &duration);

    // ToCode: to enter the selected exercise and total calcories burned in the health data
    if(choice==1){
    	saveData(HEALTHFILEPATH, "600");
    	else if(choice==2){
    		saveData((HEALTHFILEPATH, 900);
    		else if(choice==3){
    			saveData((HEALTHFILEPATH, 615);
    			else if(choice==4){
    				saveData((HEALTHFILEPATH, 615);
    				else if(choice==5){
    					saveData((HEALTHFILEPATH, 615);
    					else if(choice==6){
    						saveData((HEALTHFILEPATH, 615);
    						else if(choice==7){
    							//exit
							}
						}
					}
				}
			}
		}   	
	}

}
