/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'i':
		break;
	case 't':
		if (!*EARG())
			goto sucks;
		break;
	default:
		goto sucks:
	} ARGEND

	TESTEND;
}
