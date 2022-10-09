# Written by Joachim Wiberg <troglobit@gmail.com> and put in the public domain.
AUTOMAKE_OPTIONS = subdir-objects

noinst_LIBRARIES     = libmg.a
doc_DATA         = README

libmg_a_SOURCES       = basic.c bell.c buffer.c cinfo.c dir.c display.c echo.c 	\
		   extend.c file.c fileio.c funmap.c help.c interpreter.c	\
		   kbd.c keymap.c line.c macro.c  match.c modes.c		\
		   paragraph.c region.c search.c spawn.c tty.c ttyio.c ttykbd.c	\
		   ttydef.h undo.c util.c version.c window.c word.c yank.c	\
		   chrdef.h def.h funmap.h kbd.h key.h macro.h pathnames.h 
libmg_a_SOURCES      += queue.h tree.h
libmg_a_SOURCES      += extensions.c

libmg_a_CFLAGS        = -W -Wall -Wextra -Wno-unused-parameter
libmg_a_CFLAGS       += -D_GNU_SOURCE -DDOCDIR=\"$(docdir)\"
if TINY
libmg_a_CFLAGS       += -fomit-frame-pointer -fdata-sections -ffunction-sections	\
		   -fno-stack-protector -fno-asynchronous-unwind-tables -flto 	\
		   -fmerge-all-constants -fno-ident -finline-small-functions	\
		   -Wl,--gc-sections -Wl,-z,norelro -Wl,--hash-style=gnu	\
		   -Wl,--build-id=none
endif
# libmg_a_LIBADD         = -lncurses

#
# More or less standalone extensions.
#
if AUTOEXEC
libmg_a_SOURCES     += autoexec.c
endif
if CMODE
libmg_a_SOURCES     += cmode.c
endif
if COMPILE
libmg_a_SOURCES     += grep.c
endif
if CSCOPE
libmg_a_SOURCES     += cscope.c
endif
if CTAGS
libmg_a_SOURCES     += tags.c
endif
if DIRED
libmg_a_SOURCES     += dired.c
endif
if REGEX
libmg_a_SOURCES     += re_search.c
endif
if MGLOG
libmg_a_SOURCES     += log.c log.h
endif

#
# Building w/o terminfo/termcap/curses/ncurses
#
if NOCURSES
libmg_a_SOURCES     += ansi.c ansi.h
endif
