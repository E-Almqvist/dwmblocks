//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "scripts/cmus.sh", 0, 3}, 	// TODO: fix actual path
	{"", "scripts/netinfo.sh", 4, 2}, // TODO: signals
	{"Vol: ", "scripts/pavolume.sh", 0, 1}, // TODO: make this work
	{"", "printf \"{$(date +\"%H:%M:%S, %A, %Y-%m-%d\")}\"", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 4;
