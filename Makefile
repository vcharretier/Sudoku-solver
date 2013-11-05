SRCDIR=src/
OBJDIR=obj/
INCDIR=include/
MAINDIR=$(SRCDIR)main/

CC=gcc

SRC = $(shell find $(SRCDIR) -name "*.c"  ! -path '$(MAINDIR)*')
OBJ = $(patsubst $(SRCDIR)%.c, $(OBJDIR)%.o, $(SRC))
OBJSUBDIR = $(dir $(OBJ))
DEBUGFLAG=-O2 -Os 
LINK=
OPTION=-std=c99
WARNINGFLAG=

ifeq ($(DEBUG),1)
DEBUGFLAG=-g3 -O0 -pg
CC=clang
endif

ifeq ($(WARNING),1)
WARNINGFLAG=-Wall -Wextra
endif

sudoku: compile
	$(CC) $(OPTION) -I $(INCDIR)  $(OBJ) $(MAINDIR)main.c -o $@ $(LINK) $(DEBUGFLAG) $(WARNINGFLAG)

compile: directory $(OBJ)

$(OBJDIR)%.o : $(SRCDIR)%.c
	$(CC) $(OPTION) -I $(INCDIR) -c $< -o $@ $(DEBUGFLAG) $(WARNINGFLAG)

directory:
	@mkdir -p $(OBJSUBDIR) 1>/dev/null 2>&1 || ls >/dev/null 2>&1

clean:
	rm -rf $(OBJDIR)
	
rebuild: clean compile	
