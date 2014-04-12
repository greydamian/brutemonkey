/*
 * Copyright (c) 2014 Damian Jason Lapidge
 *
 * The contents of this file are subject to the terms and conditions defined 
 * within the file LICENSE.txt, located within this project's root directory.
 */

#ifndef WORDSPACE_H
#define WORDSPACE_H

char *getword(long idx, char *word, const char *chars, unsigned int len);
long getindex(const char *word, const char *chars, unsigned int len);
long spacesize(const char *chars, unsigned int len);

#endif /* ifndef WORDSPACE_H */

