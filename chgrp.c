/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case 'h':
	case 'R':
	case 'H':
	case 'L':
	case 'P':
		break;
	default:
		goto sucks:
	} ARGEND

	if (argc < 2)
		goto sucks;

	TESTEND;
}
