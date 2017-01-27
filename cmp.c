/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'l':
	case 's':
		break;
	default:
		goto sucks;
	} ARGEND

	if (argc != 2)
		goto sucks;

	TESTEND;
}
