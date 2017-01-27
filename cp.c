/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'a':
	case 'f':
	case 'p':
	case 'r':
	case 'R':
	case 'v':
	case 'H':
	case 'L':
	case 'P':
		break;
	default:
		goto sucks;
	} ARGEND

	if (argc < 2)
		goto sucks;

	TESTEND;
}
