/* Shana Slavin
CPSC 1010, 001
Due Feb. 10, 2017
Project 1
This will be a course grade calculator
*/

#include <stdio.h>

int main(){

	//declares variables
	double finalExamWeight = 0.00;
	double finalExamPointsEarned = 0;
	double finalExamTotalPoints = 0;
	double examOneWeight = 0.00;
	double examOnePointsEarned = 0;
	double examOneTotalPoints = 0;
	double examTwoWeight = 0.00;
	double examTwoPointsEarned = 0;
	double examTwoTotalPoints = 0;
	double quizWeight = 0.00;
	double quizPointsEarned = 0;
	double quizTotalPoints = 0;
	double projectWeight = 0.00;
	double projectPointsEarned = 0;
	double projectTotalPoints = 0;
	double labWeight = 0.00;
	double labPointsEarned = 0;
	double labTotalPoints = 0;

	printf("Final Exam Weight:        ");
	scanf("%lf", &finalExamWeight); //user inputted final exam weight is stored
	printf("Final Exam Points Earned: ");
	scanf("%lf", &finalExamPointsEarned);
	printf("Final Exam Total Points:  ");
	scanf("%lf", &finalExamTotalPoints);
	printf("Exam One Weight:          ");
	scanf("%lf", &examOneWeight);
	printf("Exam One Points Earned:   ");
	scanf("%lf", &examOnePointsEarned);
	printf("Exam One Total Points:    ");
	scanf("%lf", &examOneTotalPoints);
	printf("Exam Two Weight:          ");
	scanf("%lf", &examTwoWeight);
	printf("Exam Two Points Earned:   ");
	scanf("%lf", &examTwoPointsEarned);
	printf("Exam Two Total Points:    ");
	scanf("%lf", &examTwoTotalPoints);
	printf("Quiz Weight:              ");
	scanf("%lf", &quizWeight);
	printf("Quiz Points Earned:       ");
	scanf("%lf", &quizPointsEarned);
	printf("Quiz Total Points:        ");
	scanf("%lf", &quizTotalPoints);
	printf("Project Weight:           ");
	scanf("%lf", &projectWeight);
	printf("Project Points Earned:    ");
	scanf("%lf", &projectPointsEarned);
	printf("Project Total Points:     ");
	scanf("%lf", &projectTotalPoints);
	printf("Lab Weight:               ");
	scanf("%lf", &labWeight);
	printf("Lab Points Earned:        ");
	scanf("%lf", &labPointsEarned);
	printf("Lab Total Points:         ");
	scanf("%lf", &labTotalPoints);

	//Calculates course grade
	double numericCourseGrade = finalExamWeight * (finalExamPointsEarned / finalExamTotalPoints);
	numericCourseGrade += examOneWeight * (examOnePointsEarned / examOneTotalPoints);
	numericCourseGrade += examTwoWeight * (examTwoPointsEarned / examTwoTotalPoints);
	numericCourseGrade += quizWeight * (quizPointsEarned / quizTotalPoints);
	numericCourseGrade += projectWeight * (projectPointsEarned / projectTotalPoints);
	numericCourseGrade += labWeight * (labPointsEarned / labTotalPoints);
	numericCourseGrade *= 100.0;

	printf("Numeric Course Grade:     %.3lf\n", numericCourseGrade);

	return 0;

}
 
