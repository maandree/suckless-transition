/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'd':
		EARG();
		break;
	case 'u':
		break;
	default:
		goto sucks:
	} ARGEND

	TESTEND;
}
