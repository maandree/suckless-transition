/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;

	ARGBEGIN {
	case '1':
	case '2':
	case '3':
		break;
	default:
		goto sucks:
	} ARGEND

	if (argc != 2)
		goto sucks;

	TESTEND;
}
