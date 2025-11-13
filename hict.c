#include <stdio.h>
#include <stdlib.h>

// addressing fopen_s for msvc compatibility
#if defined(_MSC_VER)
#define FOPEN(fptr, filename, mode) fopen_s(&fptr, filename, mode)
#else
#define FOPEN(fptr, filename, mode) ((fptr) = fopen(filename, mode))
#endif

int main(int argc, const char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: %s <cleartextfile> <secretfile>\n", argv[0]);
		exit(-1); // available in stdlib, -1 for failed output
	}

	const char *filename1 = argv[1];
	FILE *file1;
	FOPEN(file1, filename1, "r");
	const char *filename2 = argv[2];
	FILE *file2;
	FOPEN(file2, filename2, "r");

	int c1;
	int c2;
	int cx;
	while ((c1 = fgetc(file1)) != EOF)
	{
		c2 = fgetc(file2);
		cx = c2 ^ c1;
		putc(cx, stdout);
		// putc(c2,stdout);
	}

	fclose(file1);
	fclose(file2);

	return 0;
}
