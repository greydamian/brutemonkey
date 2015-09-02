brutemonkey
===========

Overview
--------

Wordspace exploration tool.

By default, brutemonkey will output all unique words from a given wordspace, in 
a logically sequential order.

A wordspace is defined by 2 variables: a character set and a word length. Words 
that reside within a wordspace are defined to be strings of characters where 
all of the characters are elements of the wordspace's character set, and the 
number of characters is equal to the wordspace's word length.

Compatibility
-------------

* Linux
* Unix
* Apple OS X

Installation
------------

Full installation of brutemonkey is a 2 step process. However, the second step 
is optional.

Firstly, navigate into the root directory of the project and run the following 
command:

    $ bash build.sh

Once this has completed, you can run brutemonkey by navigating into the bin 
directory and running the following command:

    $ ./brutemonkey

Secondly, and optionally, you can install brutemonkey system-wide by copying 
the contents of the bin directory into your path. For example, you could 
execute a command such as:

    # cp bin/* /usr/local/bin/

Examples
--------

Brutemonkey could be used to generate all binary representations of a byte by 
executing the following command:

    $ brutemonkey 01 8

Brutemonkey could also be used to output all 4-digit decimal numbers (with 
leading zeros) by executing the following command:

    $ brutemonkey 0123456789 4

Brutemonkey could also be used to generate representations of all possible 
outcomes for a series of independent events. For example, one could output 
representations of the possible outcomes for 3 coin tosses by executing the 
following command:

    $ brutemonkey HT 3

License
-------

Copyright (c) 2015 Damian Jason Lapidge

Licensing terms and conditions can be found within the file LICENSE.txt.

