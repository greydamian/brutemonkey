/*
 * Copyright (c) 2014 Damian Jason Lapidge
 *
 * The contents of this file are subject to the terms and conditions defined 
 * within the file LICENSE.txt, located within this project's root directory.
 */

/*
 * stdio.h : stderr, printf(), fprintf()
 * stdlib.h: atoi(), malloc()
 * string.h: memset()
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * wordspace.c: getword(), getindex(), spacesize()
 */
#include "wordspace.h"

static const char *prgname = "brutemonkey";
static const char *version = "v1.0.0";
static const char *authors = "Damian Jason Lapidge <grey@greydamian.org>";

/*
 * Stores parsed command-line arguments.
 */
struct cmdopts {
    char *chars; /* character set */
    int   len;   /* word length   */
};

/*
 * Outputs usage information to {stderr}.
 */
void print_usage() {
    fprintf(stderr, "usage: brutemonkey <char set> <word length>\n");
}

/*
 * Parses command-line arguments into their corresponding command options. 
 * Takes arguments for a pointer to an options struct into which the parsed 
 * options will be stored {opts}, the number of command-line arguments {argc}, 
 * the argument vector {argv}.
 *
 * On success, 0 is returned. On error, -1 is returned.
 */
int parse_args(struct cmdopts *opts, int argc, char *argv[]) {
    if (argc < 3)
        return -1; /* failure */

    opts->chars = argv[argc - 2];
    opts->len   = atoi(argv[argc - 1]);
    if (opts->len < 0)
        return -1; /* failure */

    return 0; /* success */
}

int main(int argc, char *argv[]) {
    struct cmdopts opts;

    if (parse_args(&opts, argc, argv) == -1) {
        print_usage();
        return 1; /* exit failure */
    }

    char *word = malloc(opts.len + 1);
    if (word == NULL) {
        fprintf(stderr, "error: failure to allocate memory for word buffer\n");
        return 1; /* exit failure */
    }
    memset(word, '\0', opts.len + 1);

    long i = 0;
    long j = spacesize(opts.chars, opts.len);

    while (i < j) {
        getword(i, word, opts.chars, opts.len);
        printf("%s\n", word);
        i++;
    }

    return 0; /* exit success */
}

