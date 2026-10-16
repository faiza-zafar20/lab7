#include <stdio.h>
#include <string.h>

int main() {
    char word_grid[3][100];
    char longest_word[100] = "";
    int max_len = 0;
    int max_row = 0, max_col = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter row %d: ", i+1);
        scanf(" %[^\n]", word_grid[i]);
    }

    for (int i = 0; i < 3; i++) {
        char temp[100];
        strcpy(temp, word_grid[i]);
        char *token = strtok(temp, " ");
        int j = 0;
        while (token!= NULL) {
            int len = strlen(token);
            if (len > max_len) {
                max_len = len;
                strcpy(longest_word, token);
                max_row = i;
                max_col = j;
            }
            j++;
            token = strtok(NULL, " ");
        }
    }

    printf("Longest word: %s\n", longest_word);
    printf("Length: %d\n", max_len);
    printf("Row Index: %d, Column Index: %d\n", max_row, max_col);

    return 0;
}