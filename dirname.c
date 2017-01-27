/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	argv0 = argv[0], argc--, argv++;
	if (argc != 1)
		goto sucks;
	if (argv[0][0] == '-')
		goto sucks;

	TESTEND;
}
