/*
 * Copyright (c) 2014 Damian Jason Lapidge
 *
 * The contents of this file are subject to the terms and conditions defined 
 * within the file LICENSE.txt, located within this project's root directory.
 */

/*
 * stdio.h: stderr, printf(), fprintf()
 */
#include <stdio.h>

static const char *prgname = "brutemonkey";
static const char *version = "v1.0.0";
static const char *authors = "Damian Jason Lapidge <grey@greydamian.org>";

void print_usage() {
    fprintf(stderr, "brutemonkey <char set> <word length>\n");
}

int parse_args(int argc, char *argv[]) {
    return 0; // success
}

int main(int argc, char *argv[]) {
    return 0; // exit success
}

