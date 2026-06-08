#include <stdio.h>
#include <stdlib.h>

int main()
{
    int subject1, subject2, subject3, total;
    float average;
    char grade;
    char *result;

    printf("Mathematics marks: ");
    scanf("%d", &subject1);
    printf("Science marks: ");
    scanf("%d", &subject2);
    printf("English marks: ");
    scanf("%d", &subject3);

    total = subject1 + subject2 + subject3;
    average = total / 3.0;

    if (average >= 80){
      grade = 'A';
    }
    else if (average >=70 && average < 80){
        grade = 'B';
    }
    else if (average >= 60 && average < 70){
        grade = 'C';
    }
    else if (average >= 50 && average < 60){
        grade = 'D';
    }
    else{
        grade = 'F';
    }

    if (subject1 >= 40 && subject2 >= 40 && subject3 >= 40){
        result = "PASS";
    }
    else{
        result = "FAIL";
    }


    printf("\nTotal: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);
    printf("Result: %s\n", result);
    return 0;
}
