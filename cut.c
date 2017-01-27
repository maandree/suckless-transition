/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;
	int have_mode = 0;

	ARGBEGIN {
	case 'b':
	case 'c':
	case 'f':
		have_mode = 1;
		EARG();
		break;
	case 'd':
		EARG();
		break;
	case 'n':
	case 's':
		break;
	default:
		goto sucks;
	} ARGEND

	if (!have_mode)
		goto sucks;

	TESTEND;
}
