
    
#include<stdio.h>
int main(){
	printf("enter your marks:");
	int marks;
	scanf("%d",&marks);
	char grade;
	grade=marks>90?'A':marks>80?'B':marks>70?'C':marks>60?'D':'F';
	printf("you get grade %c ",grade);
 printf("Your grade is %c. ", grade);
    switch (grade) {
        case 'A':
            printf("Excellent work!");
            break;
        case 'B':
            printf("Well done.");
            break;
        case 'C':
            printf("Good job.");
            break;
        case 'D':
            printf("You passed, but you could do better.");
            break;
        case 'F':
           printf(" Sorry ,you failled.");
           break;
        default:
        	printf("invalid grade.");


    
    if (marks >= 90) {
        printf("your eligable for next round:");
    } else if (marks >= 80) {
             printf("your eligable for next round:");
    } else if (marks >= 70) {
             printf("your eligable for next round:");
    } else if (marks >= 60) {
             printf("your eligable for next round:");
    } else {
        
         printf("your not eligable for next round:");
}
}
}
    
