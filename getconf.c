/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'v':
		EARG();
		break;
	default:
		goto sucks;
	} ARGEND

	if (!argc || argc > 2)
		goto sucks;

	TESTEND;
}
