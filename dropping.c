//
//  dropping.c
//  dropping
//
//  Author: Gabriel De Oliveira
//  Course Number: COP 3223
//  Introduction to C: Programming Assignment #3
//  10/12/21.
//

#include <stdio.h>

#define SENTINEL 101

int main() {
    
    // Initialize variables
    int assignments, drops;
    float finalGrade = 0;
    
    // Prompt the user for the inputs
    printf("How many assignments are in the class?\n");
    scanf("%d", &assignments);
    
    int grades[assignments];
    
    printf("How many drops do you think there are?\n");
    scanf("%d", &drops);
    
    printf("List the grade you received for each assignment.\n");
    
    // Read in the values of the grades
    for (int i = 0; i < assignments; i++) {
        scanf("%d", &grades[i]);
    }
    
    // Find however many drops of minimum values in the array
    for (int i = 0; i < drops; i++) {
        
        int min = grades[0];
        int minIndex = 0;
        // Loop through each grade to find the minimum value each time
        for (int j = 0; j < assignments; j++) {
            if (grades[j] <= min) {
                min = grades[j];
                minIndex = j;
            }
        }
        // Set the minimum value of the iteration to a sentinel value
        // of 101 to not get caught in the loop and be over 100
        grades[minIndex] = SENTINEL;
    }
    
    // Initialize variables for the
    // new list of grades minus the dropped grades
    int newLength = assignments - drops;
    int newGrades[newLength];
    
    // Loop through the first array and check if the values
    // are less than or equal to 100 to be put into the new array
    int index = 0;
    for (int i = 0; i < assignments; i++) {
        if (grades[i] <= 100) {
            newGrades[index] = grades[i];
            index++;
        }
    }
    
    // Calculate the final grade with the final grades
    for (int i = 0; i < newLength; i++) {
        finalGrade+= newGrades[i];
    }
    
    finalGrade = finalGrade / newLength;
    
    printf("I will get a %f%% on the homeworks overall.\n", finalGrade);
    
    return 0;
}
