/* See LICENSE file for copyright and license details. */
#include "common.h"

int
main(int argc, char *argv[])
{
	TESTBEGIN;
	int aflag = 0, dflag = 0, sflag = 0;

	ARGBEGIN {
	case 'a':
		aflag = 1;
		break;
	case 'd':
		dflag = 1;
		EARG();
		break;
	case 's':
		sflag = 1;
		break;
	case 'h':
	case 'k':
	case 'x':
	case 'H':
	case 'L':
	case 'P':
		break;
	default:
		goto sucks;
	} ARGEND

	if ((aflag && sflag) || (dflag && sflag))
		goto sucks;

	TESTEND;
}
