#include<stdio.h>
int main(){
    char logs[3][3][30];
    int uppercase_count = 0;
    printf("cybersecurity log parser\n");
    printf("format: username,status,timestamp\n");
    printf("exanple: admin, access guranted, 10:45am\n\n");
    for(int i=0; i<3; i++){
        printf("enter log entry %d: ",i+1);
        scanf("%[^,],%[^,],%[^\n]", logs[i][0], logs[i][1],logs[i][2]);

    }
    printf("\n---parsed logs---\n");
    for(int i=0; i<3;i++){
        printf("log%d: username=%s | status=%s | time%s\n",
        i+1, logs[i][0], logs[i][1],logs[i][2]);
    }
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            for(int k=0; logs[i][j][k]!='\0'; k++){
                if(logs[i][j][k]>='A' && logs[i][j][k] <='Z'){
                    uppercase_count++;
                }
            }
        }
    }
    printf("\ntotal uppercase letters(A-Z) in all logs: %d\n", uppercase_count);

    return 0;
}