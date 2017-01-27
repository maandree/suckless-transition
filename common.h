/* See LICENSE file for copyright and license details. */
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "arg.h"

#define EARG() EARGF(sucks())

#define TESTBEGIN\
	char **argv_proper = argv

#define TESTEND\
	execv(SUCKLESSDIR "/" UTIL, argv_proper);\
	fprintf(stderr, "%s: exec %s: %s\n", argv0, SUCKLESSDIR "/" UTIL, strerror(errno));\
	return 120;\
sucks:\
	sucks(argv_proper);\
	return 120;

static void
sucks(char **argv)
{
	if (putenv("PATH=" SUCKYPATH "/")) {
		fprintf(stderr, "%s: putenv PATH: %s\n", argv0, strerror(errno));
	} else {
		execvp(UTIL, argv);
		fprintf(stderr, "%s: exec %s: %s\n", argv0, UTIL, strerror(errno));
	}
	exit(120);
}
