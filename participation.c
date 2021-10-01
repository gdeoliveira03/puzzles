//  Assignment #2
//  participation.c
//  participation
//  COP 3223
//  Gabriel De Oliveira
//  9/28/21.
//

#include <stdio.h>

int main() {
    
    // Initialize and set variables to 0
    int students = 0;
    int hands_raised = 0;
    int student_hand = 0;
    
    // Prompt the user for students and hands raised
    printf("How many students are in the class?\n");
    scanf("%d", &students);
    
    printf("How many hands were raised?\n");
    scanf("%d", &hands_raised);
    
    printf("List the IDs of students that raised their hands.\n");
    
    // Initialize the array
    int student_ids[students];
    
    // Set each index of array to a value
    for (int i = 0; i < students; i++) {
        student_ids[i] = 0;
    }
    
    // Prompt the user with what student raised their hand
    // and loop through however many hands were raised
    // while incrementing the index value for that student
    // by 1 for each time they raised their hands.
    // This loop gave me a headache. You owe me a Tylenol.
    for (int i = 0; i < hands_raised; i++) {
        scanf("%d", &student_hand);
        student_ids[student_hand - 1] += 1;
    }
    
    // Loop through however many students there are to announce how many times each student raised their hand.
    for (int i = 0; i < students; i++) {
        printf("Student %d raised their hand %d times.\n", i+1, student_ids[i]);
    }
    
    return 0;
}
