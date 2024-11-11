/*Sophia, a diligent student, is eager to understand grading systems. 



Create a program that prompts Sophia to input her examination marks. Utilize the ternary operator to calculate and display her corresponding grade as follows:

'A' for marks 90 or above
'B' for 80-89 (inclusive)
'C' for 70-79 (inclusive)
'D' for 60-69 (inclusive)
'F' for marks below 60
Input format :
The input consists of an integer N, representing Sophia's exam mark.

Output format :
The output prints Sophia's grade, based on her exam mark.



Refer to the sample output for the formatting specifications.

Code constraints :*/

#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    char grade = (marks >= 90) ? 'A' :
                 (marks >= 80) ? 'B' :
                 (marks >= 70) ? 'C' :
                 (marks >= 60) ? 'D' : 'F';
    printf("%c", grade);
    return 0;
}
