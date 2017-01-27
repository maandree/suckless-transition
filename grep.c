/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;
	int have_pattern = 0;

	ARGBEGIN {
	case 'E':
	case 'F':
	case 'H':
	case 'h':
	case 'c':
	case 'l':
	case 'n':
	case 'q':
	case 'i':
	case 's':
	case 'v':
	case 'w':
	case 'x':
		break;
	case 'e':
	case 'f':
		have_pattern = 1;
		EARG();
		break;
	default:
		goto sucks;
	} ARGEND

	if (!argc & !have_pattern)
		goto sucks;

	TESTEND;
}
