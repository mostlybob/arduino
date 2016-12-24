# Using `uncrustify` to format `.ino` files
I'm using `uncrustify` for tidying up files. So far it's been working well, 
since the code files appear to resemble C/C++ enough that the formatting 
seems to do the trick. It's a handy utility for my lazy typing and the fact
that Sublime doesn't do the nice auto-formatting I've gotten used to in
Visual Studio.

There's a [sourceforge](http://uncrustify.sourceforge.net/) repo, but I've 
seen repos on GH too, so it may have moved. Personally, I got it off the 
Fedora repositories (`# dnf install uncrustify`).

There's a config file at `~/.config/uncrustify.conf` which I think is pretty
much the standard output of `uncrustify --show-config`. I may have put it there,
but I'm not sure. There's an environment variable, `UNCRUSTIFY_CONFIG` which 
sets the path to the config. If desired, a custom `.config` file can be used 
with the `-c` switch.

## Typical usage
It's possible to specify the config file to use with the `-c` switch, but
early on, I created my own config file which I'm using for these examples.

Invoking without arguments usually puts the output of the uncrustifying
to a separate file with an `.uncrustify` extension. I'm pretty sure this 
is default behaviour, since I don't recall configuring that.

I usually keep the old file around, at least for a bit, but it's possible 
to have uncrustify just overwrite the file with the formatting rules defined
in the config file environment variable:

```bash
uncrustify --replace foo.c
``` 