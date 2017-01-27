/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'n':
		if (testnum(EARG(), 0, MIN(LLONG_MAX, SIZE_MAX)))
			goto sucks;
		break;
	ARGNUM:
		if (testnum(argv[0], 0, INT_MAX))
			goto sucks;
		break;
	default:
		goto sucks;
	} ARGEND

	TESTEND;
}
