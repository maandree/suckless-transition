/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	argv0 = argv[0], argc--, argv++;
	if (*argv && !strcmp(*argv, "-n"))
		argc--, argv++;
	if (*argv && **argv == '-')
		goto sucks;

	TESTEND;
}
