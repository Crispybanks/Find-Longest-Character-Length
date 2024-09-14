#include <stdio.h>
#include <string.h>

int find_longest_char_length(const char *string[], int count)
{
    int max_length = 0;
    int longest_index = 0;

    for (size_t i = 0; i < count; i++) {
        int length = strlen(string[i]);

        if (length > max_length) {
            max_length = length;
            longest_index = i;
        }
    }
    return max_length;
}

int main()
{
    const char *names[] = {"Luca", "Noah", "Theodore", "Remi", "Harper", "Avery", "Charlotte"};

    int max_length = find_longest_char_length(names, sizeof(names) / sizeof(names[0]));
    printf("The length of the longest name is: %d\n", max_length);

    return 0;
}

