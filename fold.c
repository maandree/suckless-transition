/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'b':
	case 's':
		break;
	case 'w':
		if (testnum(EARG(), 1, MIN(LLONG_MAX, SIZE_MAX)))
			goto sucks;
		break;
	ARGNUM:
		if (testnum(argv[0], 1, INT_MAX)
			goto sucks;
		break;
	default:
		goto sucks:
	} ARGEND

	TESTEND;
}
