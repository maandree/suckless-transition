/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'p':
		EARG();
		break;
	case 's':
		break;
	default:
		goto sucks:
	} ARGEND

	if (argc > 1)
		goto sucks;

	TESTEND;
}
