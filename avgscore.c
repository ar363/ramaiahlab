#include<stdio.h>

int main() {
  
  int i;
  float quiz[4], midterm[2], final, weightedTotal, avgQuiz, avgMidterm;
  
  printf("\n--- Quiz Scores ---\n");
  for(i=0; i<4; i++) {
    printf("Enter score of Quiz %d: ", i+1);
    scanf("%f", &quiz[i]);
  }
  
  
  printf("\n--- Midterm Scores ---\n");
  for(i=0; i<2; i++) {
    printf("Enter score of Midterm %d: ", i+1);
    scanf("%f", &midterm[i]);
  }
  
  
  printf("\n--- Final Score ---\n");
  printf("Enter final exam score: ");
  scanf("%f", &final);
  
  avgQuiz =  (quiz[0]+quiz[1]+quiz[2]+quiz[3])/4;
  avgMidterm =  (midterm[0]+midterm[1])/2;

  weightedTotal = 0.3*avgQuiz + 0.4*avgMidterm + 0.3*final;
  
  printf("\n\n--- RESULTS ---\n");
  
  printf("Avg quiz = %.2f\n", avgQuiz);  
  printf("Avg midterm = %.2f\n", avgMidterm);
  printf("Final = %.2f\n\n", final);
  printf("Weighted total = %.2f\n\n", weightedTotal);
  
}



/*

OUTPUT: 

--- Quiz Scores ---
Enter score of Quiz 1: 80
Enter score of Quiz 2: 87
Enter score of Quiz 3: 77
Enter score of Quiz 4: 82 

--- Midterm Scores ---
Enter score of Midterm 1: 88
Enter score of Midterm 2: 89

--- Final Score ---
Enter final exam score: 94


--- RESULTS ---
Avg quiz = 81.50
Avg midterm = 88.50
Final = 94.00

Weighted total = 88.05

*/



