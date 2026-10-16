#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentences[3][100];

    printf("Enter paragraph (3 sentences separated by ;):\n");

    for (int i = 0; i < 3; i++) {
        scanf(" %[^;]", sentences[i]);
        if (i < 2) {
            scanf("%*c");
        }
    }

    for (int i = 0; i < 3; i++) {
        int count = 0;
        for (int j = 0; sentences[i][j]!= '\0'; j++) {
            char ch = tolower(sentences[i][j]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }
        printf("Sentence %d: %s | Vowels: %d\n", i + 1, sentences[i], count);
    }

    return 0;
}