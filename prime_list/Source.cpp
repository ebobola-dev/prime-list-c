#include <stdio.h>
#include <locale.h>

void print_prime_list(int max);
int isPrime(int x);

int main() {
	int n;
	setlocale(LC_ALL, "Rus");

	while (1) {
		printf("������� �����(������� 0, ����� ���������): ");
		scanf("%d", &n);
		while (1) {
			if (n > 0) break;
			printf("���������� ������������� �����(������� 0, ����� ���������): ");
			scanf("%d", &n);
		}
		if (n == 0) break;

		print_prime_list(n);
		printf("\n");
	}
	return 0;
}

void print_prime_list(int max) {
	if (max == 1) printf("�� ����� 1 ��� ������� �����");
	else {
		printf("������ ������� ����� �� %d:\n", max);
		for (int i = 0; i <= max; i++) {
			if (isPrime(i)) printf("%d\n", i);
		}
	}
}

int isPrime(int x){
	int PRIME = 1;
	if (x <= 1) return 0;
	else if (x == 2) return 1;
	else {
		for (int d = 2; d < x / 2; d++) {
			if (x % d == 0) PRIME = 0;
		}
	}
	return PRIME;
}