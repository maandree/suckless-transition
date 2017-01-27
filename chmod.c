/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	argv0 = argv[0], argc--, argv++;

	for (; argv[0] && argv[0][0] == '-'; argc--, argv++) {
		if (!argv[0][1])
			goto sucks;
		for (i = 1; argv[0][i]; i++) {
			switch (argv[0][i]) {
			case 'R':
			case 'H':
			case 'L':
			case 'P':
				break;
			case 'r':
			case 'w':
			case 'x':
			case 's':
			case 't':
				if (i == 1)
					goto done;
				/* fallthrough */
			case '-':
				if (i == 1 && !argv[0][i + 1]) {
					argv++;
					argc--;
					goto done;
				}
				/* fallthrough */
			default:
				goto sucks;
			}
		}
	}
done:

	if (argc < 2)
		goto sucks;

	TESTEND;
}
