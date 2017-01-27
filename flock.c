/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'n':
	case 'o':
	case 's':
	case 'u':
	case 'x':
		break;
	default:
		goto sucks;
	} ARGEND

	if (argc < 2)
		goto sucks;

	TESTEND;
}
