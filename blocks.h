//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cmus.sh", 1, 0},
	{"", "netinfo.sh", 4, 0},
	{"bat: ", "upower -i `upower -e | grep 'BAT'` | grep percentage | awk '{print $2}'", 10, 0},
	{"vol: ", "pavolume.sh", 2, 0},
	{"", "printf \"{$(date +\"%H:%M:%S, %A, %Y-%m-%d\")}\"", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 4;
