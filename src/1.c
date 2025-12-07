#include <stdio.h>

int my_strlen(const char s[]) {
    int length = 0;

    while (s[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char buffer[100];

    printf("Podaj tekst: ");
    fgets(buffer, sizeof(buffer), stdin);

    int length = my_strlen(buffer);

    if (buffer[length - 1] == '\n') {
        length--;
    }

    printf("Dlugosc twojego tekstu to: %d znakow\n", length);

    return 0;
}
