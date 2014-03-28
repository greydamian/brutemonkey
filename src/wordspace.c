/*
 * Copyright (c) 2014 Damian Jason Lapidge
 *
 * The contents of this file are subject to the terms and conditions defined 
 * within the file LICENSE.txt, located within this project's root directory.
 */

/*
 * string.h: strlen(), strchr()
 */
#include <string.h>

#include "wordspace.h"

/*
 * Computes the word located at an index within a wordspace. Takes parameters 
 * for the index within the wordspace {idx}, a pointer to the null-terminated 
 * character set of the wordspace {chars}, the word length of the wordspace 
 * {len}.
 *
 * On success, a pointer to the resulting word is returned. On error, results 
 * are not specified.
 */
char *getword(long idx, char *word, char *chars, unsigned int len) {
    if (len < 1)
        return word;

    int chars_len = strlen(chars);
    int chars_idx = idx % chars_len;

    word[len - 1] = chars[chars_idx];

    return getword(idx / chars_len, word, chars, len - 1);
}

/*
 * Computes the index for the location of a word within a wordspace. Takes 
 * parameters for a pointer to the null-terminated word, a pointer to the 
 * null-terminated character set of the wordspace {chars}, the word length 
 * {len}.
 *
 * On success, the index of the word is returned. On error, results are not 
 * specified.
 *
 * TODO: defend against NULL returned by {strchr()} when char in {word} is not 
 * found in {chars}.
 */
long getindex(char *word, char *chars, unsigned int len) {
    if (len < 1)
        return 0;

    int chars_len = strlen(chars);
    int chars_idx = strchr(chars, word[len - 1]) - chars;

    return chars_idx + chars_len * getindex(word, chars, len - 1);
}

/*
 * Computes the size of a wordspace. The size of a wordspace is defined as the 
 * number of unique words within the wordspace.
 *
 * On success, the size of the wordspace is returned. On error, -1 is returned.
 *
 * TODO: defend against integer overflow.
 */
long spacesize(char *chars, unsigned int len) {
    if (len < 1)
        return 0; /* empty word space */
    if (len < 2)
        return strlen(chars);
    return strlen(chars) * spacesize(chars, len - 1);
}

