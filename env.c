/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'i':
		break;
	case 'u':
		EARG();
		break;
	default:
		goto sucks:
	} ARGEND

	TESTEND;
}
