/* See LICENSE file for copyright and license details. */
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "arg.h"

#define MIN(A, B) ((A) < (B) ? (A) : (B))

#define TESTBEGIN\
	char **argv_proper = argv

#define TESTEND\
	execv(SUCKLESSDIR "/" UTIL, argv_proper);\
	fprintf(stderr, "%s: exec %s: %s\n", argv0, SUCKLESSDIR "/" UTIL, strerror(errno));\
	return 120;\
sucks:\
	sucks(argv_proper);\
	return 120;

#define EARG() EARGF(sucks(argv_proper))

void
sucks(char **argv)
{
	if (putenv("PATH=" SUCKYPATH)) {
		fprintf(stderr, "%s: putenv PATH: %s\n", argv0, strerror(errno));
	} else {
		execvp(UTIL, argv);
		fprintf(stderr, "%s: exec %s: %s\n", argv0, UTIL, strerror(errno));
	}
	exit(120);
}

int
testnum(char *s, unsigned long long int min, unsigned long long int max)
{
	char *end;
	unsigned long long int value;
	errno = 0;
	value = strtoull(s, &end, 0);
	return errno || *end || value < min || value > max;
	(void) testnum;
}
