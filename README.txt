brutemonkey
===========

Overview
--------

Brutemonkey is a wordspace exploration tool.

By default, brutemonkey will output all unique words from a given wordspace, in 
a logically sequential order.

A wordspace is defined by 2 variables: a character set and a word length. Words 
that reside within a wordspace are strings of characters where all of the 
characters are elements of the wordspace's character set, and the number of 
characters is equal to the wordspace's word length.

Compatibility
-------------

    * Linux
    * Unix
    * OS X

Installation
------------

Full installation of brutemonkey is a 2 step process. However, the second step 
is optional.

Firstly, navigate to the src directory and run the following command:

    $ bash build.sh

Once this has completed, you can run brutemonkey by navigating to the bin 
directory and running the following command:

    $ ./brutemonkey

Secondly, and optionally, you can install brutemonkey system-wide by copying 
the contents of the bin directory into your path. For example, you could 
execute a command such as:

    # cp bin/* /usr/local/bin/

Examples
--------

Brutemonkey can be used to generate all binary representations of a byte by 
executing the following command:

    $ brutemonkey 01 8

Brutemonkey could also be used to output all 4-digit decimal numbers (with 
leading zeros) by executing the following command:

    $ brutemonkey 0123456789 4

License
-------

Copyright (c) 2014 Damian Jason Lapidge

Licensing terms and conditions can be found within the file LICENSE.txt.

