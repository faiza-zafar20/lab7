#include<stdio.h>
#include<string.h>
int main(){
    char secret_message[3][100];
    printf("intelligence messaging portal\n");
    printf("omly UPPERCASE A-Z and SPACE allowed.\n");
    printf("an digital/symbol will truncate the mesaage.\n\n");
    for(int i=0; i<3; i++){
        printf("enter encrypted lines %d: ", i+1);
        scanf("%[A-Z]", secret_message[i]);
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }
    printf("\n---filtered messages report---\n");
    for(int i=0; i<3; i++){
        int spaces =0;
       int words =0;
        for(int j=0; secret_message[i][j]!='\0'; j++){
            if(secret_message[i][j]==' '){
                spaces++;
            }
        }
        
        for(int j=0; secret_message[i][j]!='\0';j++){
            if(secret_message[i][j]!=' ' && (j==0 ||secret_message[i][j-1] == ' ')){

                words++;
            }
        }
        printf("messages %d:%s |spaces: %d| words: %d\n",i+1,secret_message[i],words);
    }


    return 0;
}