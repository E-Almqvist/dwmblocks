//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cmus.sh", 1, 3}, 	// TODO: fix actual path
	{"", "netinfo.sh", 4, 2}, // TODO: signals
	{"Vol: ", "pavolume.sh", 0, 1}, // TODO: make this work
	{"", "printf \"{$(date +\"%H:%M:%S, %A, %Y-%m-%d\")}\"", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 4;
