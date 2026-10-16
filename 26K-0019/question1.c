#include<stdio.h>
int main(){
    char student_names[3][50];
    int marks[3][3];
    float avg[3];
    printf("enter full names of three students:\n");
    for (int i=0;i<3;i++){
        printf("student %d:",i+1);
        scanf("%[^\n]",student_names[i]);
        for(int j=0;j<3;j++){
            printf("subject %d marks:\n", j+1);
            scanf("%d", &marks[i][j]);
        
        }
    }
    for(int i=0;i<3;i++){
        int sum = 0;
        for (int j=0; j<3; j++){
            sum+=marks[i][j];
        }
        avg[i]=sum/3.0;
    }
    printf("\nstudent\n");
    printf("%-20s | %-15s | %s\n","full name","marks","average");
    for(int i=0;i<3;i++){
        printf("%-20s |%d, %d, %d | %.2f\n",
            student_names[1],marks[i][0],marks[i][1],avg[i]);
            
    }


    return 0;
}