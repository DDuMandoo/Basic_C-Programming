#include <stdio.h>
#include <stdbool.h>

long long getNum();
long long BtoD(long long binary);
long long powerTwo(long long num);
long long firstDigit(long long num);
bool validateBinary(long long binary);

int main() {
	long long binary;
	long long decimal;

	binary = getNum();
	decimal = BtoD(binary);
	printf("The binary number was: %d", binary);
	printf("\nThe decimal number is: %d", decimal);

	return 0;
}

long long getNum() {
	bool isValid;
	long long binary;

	do {
		printf("Enter a binary number (zeros and ones): ");
		scanf("%lld", &binary);
		isValid = validateBinary(binary);
		if (!isValid) {
			printf("Not binary. Zeros/ones only.\n\n");
		}
		else
			break;
	} while (!isValid);
	return binary;
}

long long BtoD(long long binary) {
	long long decimal;

	decimal = 0;
	for (int i = 0; binary != 0; i++) {
		decimal += firstDigit(binary) * powerTwo(i);
		binary /= 10;
	}
	return decimal;
}

bool validateBinary(long long binary) {
	while (binary != 0) {
		if (binary % 10 != 0 && binary % 10 != 1){
			return false;
		}
		binary /= 10;
	}
	return true;
}


long long powerTwo(long long num) {
	long long power = 1;

	for (int i = 1; i <= num; i++) {
		power *= 2;
	}
	return power;
}

long long firstDigit(long long num) {
	return (num % 10);
}