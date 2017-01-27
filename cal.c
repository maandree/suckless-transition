/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case '1':
	case '3':
	case 'm':
	case 's':
	case 'y':
		break;
	case 'c':
	case 'f':
	case 'n':
		EARG();
	default:
		goto sucks:
	} ARGEND

	if (argc > 2)
		goto sucks;

	TESTEND;
}
