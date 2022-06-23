int main(void) {
	int i, j;
	for (i = 9; i > 0; i -= 2) {
		for (j = 1; j <= i; j += 2) {
			printf("%d + %d = %d\n", i, j, i + j);
		}
		printf("------------------------------------------------------\n");
	}
	return 0;
}