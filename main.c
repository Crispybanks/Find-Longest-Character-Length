#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define	MAX_PASSWORD_LENGTH 10

size_t findLongestCharacterLength(const char *string[], size_t count) {
	size_t maxLength = 0;
	size_t longestIndex = 0;

	for (size_t i = 0; i < count; ++i) {
		size_t length = strlen(string[i]);

		if (length > maxLength) {
			maxLength = length;
			longestIndex = i;
		}
	}

	return maxLength;
}

int main()
{
	char name[MAX_NAME_LENGTH];
	char password[MAX_PASSWORD_LENGTH];

	size_t maxLength = findLongestCharacterLength(idxT, sizeof(idxT) / sizeof(idxT[0]));

	maxLength++;

	printf("Maximum length: %zu\n", maxLength);	

	return 0;
}
