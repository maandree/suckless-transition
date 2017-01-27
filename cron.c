/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'n':
		break;
	case 'f':
		EARG();
		break;
	default:
		goto sucks;
	} ARGEND

	if (argc)
		goto sucks;

	TESTEND;
}
