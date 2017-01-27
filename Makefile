CONFIGFILE = config.mk
include $(CONFIGFILE)

BIN =\
	basename\
	cal\
	cat\
	chgrp\
	chmod\
	chown\
	chroot\
	cksum\
	cmp\
	cols\
	comm\
	cp\
	cron\
	cut\
	date\
	dirname\
	du\
	echo\
	ed\
	env\
	expand\
	flock\
	fold\
	grep\
	head

FLAGS = $(CFLAGS) $(CPPFLAGS) -DSUCKLESSDIR='"$(SUCKLESSDIR)"' -DSUCKYPATH='"$(SUCKYPATH)"'

all: $(BIN)

%: %.c arg.h common.h
	$(CC) $(FLAGS) $(LDFLAGS) -DUTIL='"%*"' -o $@ $<

clean:
	-rm $(BIN) $(BIN:=.o)

.PHONY: all clean
